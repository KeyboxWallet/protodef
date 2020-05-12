'use strict';

const types = require('./types');

var outString = 
`
#ifndef __KEYBOX_WALLET_MESSAGE_TYPE_
#define __KEYBOX_WALLET_MESSAGE_TYPE_

// auto-generated file. don't edit this file manually.
`;

for (var key in types) {
    outString += '#define ' + key + ' ' + types[key] + '\n';
}

outString += '\n#endif\n';

const fs = require('fs');
fs.writeFileSync('keybox-proto-types.h',outString);

