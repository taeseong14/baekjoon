const fs = require('fs');
const input = fs.readFileSync('/dev/stdin').toString();

console.log(input.split(" ").sort((a,b) => b-a)[1]);
