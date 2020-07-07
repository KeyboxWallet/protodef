'use strict';

const types = require('./types');

var outString = 
`
package com.keybox.plugins.wallet;

// auto-generated file. don't edit this file manually.

class MessageTypes {
`;

for (var key in types) {
    outString += 'public static final int ' + key + ' = ' + types[key] + ';\n';
}

outString += '};\n';

const fs = require('fs');
fs.writeFileSync('MessageTypes.java',outString);

