obj = {
    'A+': 4.5,
    'A0': 4.0,
    'B+': 3.5,
    'B0': 3.0,
    'C+': 2.5,
    'C0': 2.0,
    'D+': 1.5,
    'D0': 1.0,
    'F': 0,
};
arr = require('fs').readFileSync('/dev/stdin').toString().trim().split('\n').filter(e => !e.endsWith('P')).map(e => [+e.split(' ')[1], obj[e.split(' ')[2]]]);
console.log((arr.reduce((a, b) => a + b[0] * b[1], 0)/arr.reduce((a, b) => a + b[0], 0)).toFixed(6))
