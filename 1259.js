input=require('fs').readFileSync('/dev/stdin').toString().trim().split('\n').slice(0, -1);
input.forEach(e => console.log(e==e.split('').reverse().join('')?'yes':'no'))
