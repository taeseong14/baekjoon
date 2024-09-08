const [a, b, c] = require('fs').readFileSync(0).toString().trim().split('\n');
console.log(+a + +b - c);
console.log(a + b - c);
