const input = require('fs').readFileSync(0).toString().trim();
const obj = {};
input.split('').forEach(e => {
    if (e === '9') e = '6';
    if (!obj[e]) obj[e] = 0;
    obj[e]++;
});
if (obj[6]) obj[6] = Math.ceil(obj[6] / 2);
console.log(Object.values(obj).sort().pop())
