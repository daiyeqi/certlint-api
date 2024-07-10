[![build](https://github.com/daiyeqi/certlint-api/actions/workflows/docker.yml/badge.svg)](https://github.com/daiyeqi/certlint-api/actions/workflows/docker.yml)
[![Docker pulls](https://img.shields.io/docker/pulls/daiyeqi/certlint-api.svg)](https://hub.docker.com/r/daiyeqi/certlint-api/)
[![GitHub release](https://img.shields.io/github/release/daiyeqi/certlint-api.svg)](https://github.com/daiyeqi/certlint-api/releases)
[![GitHub License](https://img.shields.io/github/license/daiyeqi/certlint-api)
](https://github.com/daiyeqi/certlint-api/blob/main/LICENSE)

## certlint api 

forked from [thoom/certlint-api](https://github.com/thoom/certlint-api)

A simple web API interface for the [certlint/certlint](https://github.com/certlint/certlint.git) project.


## Installation

```console
$ docker pull ghcr.io/daiyeqi/certlint-api
$ docker run -p 9000:9000 --name certlint-api -d ghcr.io/daiyeqi/certlint-api
```
## Usage

Post a certificate to `/lint` endpoint.
