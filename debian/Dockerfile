FROM ruby:3-slim-bookworm
LABEL maintainer="Dai Yeqi <daiyeqi@nichijou.com>"

ENV CERTLINT_API_VERSION 0.3.3
ENV CERTLINT_VERSION 1.7.3

COPY certlint /opt/certlint

WORKDIR /opt/certlint

RUN certlintDir="/opt/certlint" \
    && apt update && apt install -y --no-install-recommends --no-install-suggests gcc g++ make curl \
    && gem install -N public_suffix simpleidn sinatra puma \
    && (cd $certlintDir/ext && ruby extconf.rb && make -j2) \
    && ln -s $certlintDir/ext/asn1validator.* $certlintDir/lib/ \
    && /bin/bash $certlintDir/update-data.sh \
    && apt purge -y --auto-remove gcc g++ make && apt autoclean \
    && rm -rf /var/lib/apt/lists/* \
    && echo "Container for $(uname -m) CPU architecture." > /opt/architecture

COPY src /opt/certlint/certlint-api

EXPOSE 9000

CMD ["puma", "certlint-api/config.ru", "-p", "9000"]
