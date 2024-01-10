const input = require('fs').readFileSync('/dev/stdin').toString().trim();
if (input === input[0].repeat(input.length)) console.log(0);
else console.log(Math.min(input.match(/0+/g).length,input.match(/1+/g).length));
