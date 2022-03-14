const fs = require('fs');
const input = fs.readFileSync('/dev/stdin').toString().trim();
let obj = {};
for(let i of input) {
    let a = i.toUpperCase();
    if(!obj[a]) obj[a] = 0;
    obj[a]++;
}
let arr = Object.keys(obj).sort((a,b)=>obj[b]-obj[a]);
if(obj[arr[0]]==obj[arr[1]]) return console.log("?");
else console.log(arr[0]);
