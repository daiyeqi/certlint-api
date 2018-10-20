## certlint api

forked from [thoom/certlint-api](https://github.com/thoom/certlint-api)

A simple web API interface for the [awslabs/certlint](https://github.com/awslabs/certlint.git) project.


## Installation

```console
$ docker pull daiyeqi/certlint-api
$ docker run -p 9000:9000 --name certlint-api -d daiyeqi/certlint-api
```
## Usage

Post a DER certificate to `/v1/certlint` endpoint.
