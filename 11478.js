s = require('fs').readFileSync('/dev/stdin').toString().trim(), l = s.length;
console.log(new Set(Array(l).fill().map((_, i) => Array(l-i).fill().map((_, ii) => s.slice(ii, ii + i + 1))).flat()).size)
