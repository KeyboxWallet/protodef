#!/bin/sh
PROTOBUF_VERSION=`protoc --version | awk '{print $2}'`
protoc --java_out=java/ messages.proto
protoc --java_out=lite:java-lite/ messages.proto
protoc --nanopb_out=c messages.proto
node types-gen-c.js
node errcode-gen-c.js
