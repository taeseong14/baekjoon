const arr = Array(10).fill();
[arr[0], arr[1], arr[2]] = [1, 2, 4];
arr.forEach((e, i) => e || (arr[i]=arr[i-3]+arr[i-2]+arr[i-1]));
const [, ...input] = require('fs').readFileSync('/dev/stdin').toString().trim().split('\n');
input.forEach(e => console.log(arr[e-1]));
