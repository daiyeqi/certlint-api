$LOAD_PATH.unshift '/opt/certlint/lib'

require 'sinatra'
require 'certlint'
require 'json'

configure { set :server, :puma }

configure do
  set show_exceptions: false
end

before do
  content_type 'application/json'
end

get '/' do
  { "message": "Version (Certlint API: " + ENV["CERTLINT_API_VERSION"] + ", Certlint: "+ ENV["CERTLINT_VERSION"] + ")" }.to_json
end

get '/update-data' do
  system("/bin/bash /opt/certlint/update-data.sh")
  { "message": "Update Certlint Data" }.to_json
end

post '/parse' do
  raw = request.body.read

  if raw.empty?
    halt 400, { "message": "Bad Request" }.to_json
  end
  
  if raw.include? '-BEGIN CERTIFICATE-'
    m, der = CertLint::PEMLint.lint(raw, 'CERTIFICATE')
  else
    der = raw
  end

  content_type 'text/plain'
  OpenSSL::X509::Certificate.new(der).to_text
end

post '/lint' do
  raw = request.body.read

  if raw.empty?
    halt 400, { "message": "Bad Request" }.to_json
  end

  if raw.include? '-BEGIN CERTIFICATE-'
    m, der = CertLint::PEMLint.lint(raw, 'CERTIFICATE')
  else
    m = []
    der = raw
  end

  bug = []
  information = []
  notice = []
  warning = []
  error = []
  fatal = []
  other = []

  m += CertLint::CABLint.lint(der)
  m.each do |msg|
    status = msg[0...1]
    message = msg[2..-1].strip

    case status
    when 'B'
      bug << message
    when 'I'
      information << message
    when 'N'
      notice << message
    when 'W'
      warning << message
    when 'E'
      error << message
    when 'F'
      fatal << message
    else
      other << msg
    end
  end

  json = { }
  json[:BUG] = bug unless bug.empty?
  json[:INFORMATION] = information unless information.empty?
  json[:NOTICE] = notice unless notice.empty?
  json[:WARNING] = warning unless warning.empty?
  json[:ERROR] = error unless error.empty?
  json[:FATAL] = fatal unless fatal.empty?
  json[:OTHER] = other unless other.empty?

  json.to_json
end

not_found do
  { "message": "Not Found" }.to_json
end

error do
  status 500
  { "message": "Internal Server Error" }.to_json
end
