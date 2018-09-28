'use strict';

const errcode = require('./errcode');

var outString = 
`
#ifndef _KEYBOX_ERROR_CODE_INCLUDE_
#define _KEYBOX_ERROR_CODE_INCLUDE_

`;

function transformKey(KeyName){
    return 'KEYBOX_' + KeyName.replace(/([a-z])([A-Z])/g, "$1_$2" ).toUpperCase();
}

for (var key in errcode) {
    outString += '#define ' + transformKey(key) + ' ' + errcode[key] + '\n';
}

outString += '\n#endif\n';

const fs = require('fs');
fs.writeFileSync('keybox-errcodes.h',outString);

