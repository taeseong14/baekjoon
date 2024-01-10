require('fs').readFileSync('/dev/stdin').toString().split('\n').slice(1).map(l=>console.log(l.replace(/(\w+)/g, e => e.split('').reverse().join(''))))
