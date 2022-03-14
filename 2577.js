const fs = require('fs');
const input = fs.readFileSync('/dev/stdin').toString().trim().split("\n").map(e=>+e);
let result = input.reduce((a,b)=>a*b).toString();
result = result.split("");
arr = [];
for(let i=0;i<10;i++) {
    arr.push(result.filter(e=>e == i).length);
}
console.log(arr.join("\n"))
