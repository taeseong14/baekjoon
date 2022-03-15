str = require('fs').readFileSync("/dev/stdin").toString().trim()
console.log(str?str.split(" ").length:0)
