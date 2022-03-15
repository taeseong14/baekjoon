const str = require('fs').readFileSync("/dev/stdin").toString().split("\n")[1]
console.log(str.split("").map(e=>+e).reduce((a,b)=>a+b))
