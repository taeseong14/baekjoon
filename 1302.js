const obj = {};
require('fs').readFileSync('/dev/stdin').toString().trim().split('\n').slice(1).forEach(e => obj[e] = (obj[e]||0)+1);
const arr = Object.entries(obj).sort((a, b) => b[1] - a[1]);
console.log(arr.filter(e => e[1] == arr[0][1]).map(e => e[0]).sort()[0]);
