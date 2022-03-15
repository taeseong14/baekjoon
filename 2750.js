const rl = require('readline').createInterface({input: process.stdin, output: process.stdout})
let input = [];
rl.on('line', l => {
  input.push(l);
}).on('close', () => {
    console.log(input.slice(1).sort((a,b)=>a-b).join("\n"))
})
