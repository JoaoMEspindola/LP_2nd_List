var x = 10

function escopo1 (x){
    y = x + 100
    return y
}

function escopo2 (x){
    z = y + x + 100
    return z
}

function escopo3 (x){
    k = z + y + x + 100
    return k
}

console.log(escopo1(x))
console.log(escopo2(x))
console.log(escopo3(x))
console.log(x)