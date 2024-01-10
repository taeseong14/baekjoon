console.log(require('fs').readFileSync('/dev/stdin').toString().replace(/(<[^>]+>)|([\w\d]+)/g, e => e[0]=='<'?e:e.split('').reverse().join('')))
