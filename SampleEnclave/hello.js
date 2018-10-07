'use strict'
var addon = require('bindings')('hello');
console.log( "hello.js: ", addon.hello() )
