FROM ruby:3-alpine
LABEL maintainer="Dai Yeqi <daiyeqi@nichijou.com>"

ENV CERTLINT_API_VERSION 0.3.4
ENV CERTLINT_VERSION 1.7.4

COPY certlint /opt/certlint

WORKDIR /opt/certlint

RUN certlintDir="/opt/certlint" \
    && apk add --no-cache --virtual .build-deps gcc g++ make \
    && apk add --no-cache bash curl \
    && gem install -N public_suffix simpleidn sinatra puma \
    && (cd $certlintDir/ext && ruby extconf.rb && make -j2) \
    && ln -s $certlintDir/ext/asn1validator.* $certlintDir/lib/ \
    && /bin/bash $certlintDir/update-data.sh \
    && apk del --no-network .build-deps \
    && echo "Container for $(uname -m) CPU architecture." > /opt/architecture

COPY src /opt/certlint/certlint-api

EXPOSE 9000

CMD ["puma", "certlint-api/config.ru", "-p", "9000"]
