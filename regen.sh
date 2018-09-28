#!/bin/sh
protoc --cpp_out=cpp messages.proto
protoc --nanopb_out=c messages.proto 
node types-gen-c.js
node errcode-gen-c.js
