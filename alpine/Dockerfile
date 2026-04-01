FROM ruby:3-alpine
LABEL maintainer="Dai Yeqi <daiyeqi@nichijou.com>"

ENV CERTLINT_API_VERSION=0.3.7
ENV CERTLINT_VERSION=1.8.5

RUN certlintDir="/opt/certlint" \
    && apk add --no-cache --virtual .build-deps gcc g++ make \
    && apk add --no-cache bash curl \
    && export TEMP_HOME="$(mktemp -d)" && cd $TEMP_HOME \
    && curl -L -o $TEMP_HOME/certlint.tar.gz https://github.com/certlint/certlint/archive/refs/tags/v$CERTLINT_VERSION.tar.gz && tar -zxf certlint.tar.gz \
    && mv certlint-$CERTLINT_VERSION $certlintDir && cd $certlintDir \
    && gem install -N public_suffix simpleidn sinatra puma \
    && (cd $certlintDir/ext && ruby extconf.rb && make -j2) \
    && ln -s $certlintDir/ext/asn1validator.* $certlintDir/lib/ \
    && /bin/bash $certlintDir/update-data.sh \
    && apk del --no-network .build-deps \
    && echo "Container for $(uname -m) CPU architecture." > /opt/architecture

WORKDIR /opt/certlint
COPY src /opt/certlint/certlint-api

EXPOSE 9000

CMD ["puma", "certlint-api/config.ru", "-p", "9000"]
