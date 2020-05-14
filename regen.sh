#!/bin/sh
PROTOBUF_VERSION=`protoc --version | awk '{print $2}'`
mkdir -p cpp/${PROTOBUF_VERSION}
protoc --cpp_out=cpp/${PROTOBUF_VERSION} messages.proto
protoc --nanopb_out=c messages.proto
node types-gen-c.js
node errcode-gen-c.js
