const N = +require("fs").readFileSync('/dev/stdin').toString()
let result = 0;
for(let i=1;i<=N;i++) {
    let a = i.toString()
    if(a.length <= 2) result++
    else {
        let set = new Set();
        for(let j in a) {
            if(!a[+j+1]) break;
            set.add(a[+j+1] - a[j])
        }
        if(set.size === 1) result++
    }
}
console.log(result)
