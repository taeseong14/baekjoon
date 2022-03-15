console.log(require('fs').readFileSync('/dev/stdin').toString().split(" ").map(e=>BigInt(e)).reduce((a,b)=>a+b).toString())
