FROM ruby:3.1-buster
LABEL maintainer="Dai Yeqi <daiyeqi@outlook.com>"

ENV CERTLINT_API_VERSION 0.2.2
ENV CERTLINT_VERSION 1.6.2

COPY certlint /opt/certlint

WORKDIR /opt/certlint

RUN certlintDir="/opt/certlint" \
    && gem install -N public_suffix simpleidn sinatra puma \
    && (cd $certlintDir/ext && ruby extconf.rb && make) \
    && ln -s $certlintDir/ext/asn1validator.* $certlintDir/lib/ \
    && /bin/bash $certlintDir/update-data.sh \
    && rm -rf /var/lib/apt/lists/*

COPY src /opt/certlint/certlint-api

EXPOSE 9000

CMD ["puma", "certlint-api/config.ru", "-p", "9000"]
