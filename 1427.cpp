console.log(require('fs').readFileSync('/dev/stdin').toString().split("").sort((a,b)=>b-a).join(""))
