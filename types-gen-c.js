'use strict';

const types = require('./types');

var outString = 
`
#ifndef __KEYBOX_WALLET_MESSAGE_TYPE_
#define __KEYBOX_WALLET_MESSAGE_TYPE_

`;

for (var key in types) {
    outString += '#define ' + key + ' ' + types[key] + '\n';
}

outString += '\n#endif\n';

const fs = require('fs');
fs.writeFileSync('keybox-proto-types.h',outString);

