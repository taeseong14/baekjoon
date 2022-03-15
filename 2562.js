a = require('fs').readFileSync('/dev/stdin').toString().split("\n").map(e=>+e)
n = Math.max.apply(this, a)
console.log(n)
console.log(a.indexOf(n)+1)
