const inputs = [...require('fs').readFileSync('/dev/stdin').toString().trim().slice(2).match(/([A-Z]+)\n(\d+)\n(\[[\d\,]{0,}\])/g)];
inputs.forEach(input => {
let [cmd, n, arr] = input.split('\n');
arr = arr.slice(1,-1).split(',');
let err = 0;
let rev = false;
for(let i=0;i<cmd.length;i++) {
    if (cmd[i] == 'R') rev = !rev;
    else if (cmd[i] == 'D') {
        if (arr.length == 0 || arr[0] == '') {
            err = 1; break;
        }
        rev? arr.pop() : arr.splice(0,1);
    }
}
if (err) console.log('error');
else console.log(`[${(rev?arr.reverse():arr).join(',')}]`)
})
