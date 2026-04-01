FROM ruby:3-slim-trixie
LABEL maintainer="Dai Yeqi <daiyeqi@nichijou.com>"

ENV CERTLINT_API_VERSION=0.3.7
ENV CERTLINT_VERSION=1.8.5

RUN certlintDir="/opt/certlint" \
    && apt update && apt install -y --no-install-recommends --no-install-suggests gcc g++ make curl \
    && export TEMP_HOME="$(mktemp -d)" && cd $TEMP_HOME \
    && curl -L -o $TEMP_HOME/certlint.tar.gz https://github.com/certlint/certlint/archive/refs/tags/v$CERTLINT_VERSION.tar.gz && tar -zxf certlint.tar.gz \
    && mv certlint-$CERTLINT_VERSION $certlintDir && cd $certlintDir \
    && gem install -N public_suffix simpleidn sinatra puma \
    && (cd $certlintDir/ext && ruby extconf.rb && make -j2) \
    && ln -s $certlintDir/ext/asn1validator.* $certlintDir/lib/ \
    && /bin/bash $certlintDir/update-data.sh \
    && apt purge -y --auto-remove gcc g++ make && apt autoclean \
    && rm -rf /var/lib/apt/lists/* \
    && echo "Container for $(uname -m) CPU architecture." > /opt/architecture

WORKDIR /opt/certlint
COPY src /opt/certlint/certlint-api

EXPOSE 9000

CMD ["puma", "certlint-api/config.ru", "-p", "9000"]
