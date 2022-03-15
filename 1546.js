const f = function(...args) {
    let big = Math.max.apply(this, args)
    let arr = args.map(e=>e/big * 100)
    return arr.reduce((a,b)=>a+b) / arr.length
}
const input = require('fs').readFileSync('/dev/stdin').toString().split("\n")[1]
const result = f.apply(this, input.split(" ").map(e=>+e))
console.log(result)
