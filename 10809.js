const input = require('fs').readFileSync("/dev/stdin").toString()
console.log("abcdefghijklmnopqrstuvwxyz".split("").map(e=>input.indexOf(e)).join(" "))
