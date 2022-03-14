const fs = require('fs');
const input = fs.readFileSync('/dev/stdin').toString().split("\n");

const arr = input.map(e=>+e).filter(e=>e%2).sort((a,b)=>a-b);

if(arr.length) console.log(arr.reduce((a,b)=>a+b) + "\n" + arr[0]);
else console.log(-1);
