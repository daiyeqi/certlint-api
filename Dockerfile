FROM ruby:2.7-buster
LABEL maintainer="Dai Yeqi <daiyeqi@outlook.com>"

ENV CERTLINT_VERSION 1.0.0

COPY certlint /opt/certlint

RUN mkdir /opt/certlint-api \
    && certlintDir="/opt/certlint" \
    && gem install -N public_suffix simpleidn sinatra puma \
    && (cd $certlintDir/ext && ruby extconf.rb && make) \
    && ln -s $certlintDir/ext/asn1validator.* $certlintDir/lib/ \
    && rm -rf /var/lib/apt/lists/*

WORKDIR /opt/certlint-api
COPY app .

EXPOSE 9000

CMD ["puma", "config.ru", "-p", "9000"]
