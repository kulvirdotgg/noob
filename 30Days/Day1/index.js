// task 1.
var numberVar = 69
console.log(numberVar)

// task 2.
let str = "skill issues"
console.log(str)

// task 3.
const bool = false
console.log(bool)

// task 4
const num = 420
const newStr = "no skill issues"
const ffalse = false
const obj = new Object({})
const arr = ["Rust", "Blazing Fast"]
console.log(typeof num)
console.log(typeof newStr)
console.log(typeof ffalse)
console.log(typeof obj)
console.log(typeof arr)

// task 5
let vari = "assignment with let"
console.log(vari)
try {
    vari = "reassignment with let"
    console.warn(vari)
} catch (error) {
    console.error(error)
}

// task 6
const newVari = "assignment with const"
console.log(newVari)
try {
    newVari = "reassignment again with const"
} catch (err) {
    console.error("TypeError: Assignment to constant variable.")
}

// feature 1
function varntype(...arguments) {
    const arr = []
    if (Array.isArray(arguments[0])) {
        arguments[0].forEach((arg) => {
            arr.push({ "variable value": arg, "type of variable is": typeof arg })
        })
    } else {
        arguments.forEach((arg) => {
            arr.push({ "variable value": arg, "type of variable is": typeof arg })
        })
    }
    console.table(arr)
}
diffVars = [num, str, obj, arr, bool]
varntype(diffVars)

// feature 2

function letvar() {
    let vari = "assignment with let"
    console.log(vari)
    try {
        vari = "reassignment with let"
        console.warn(vari)
    } catch (error) {
        console.error(error)
    }

    // task 6
    const newVari = "assignment with const"
    console.log(newVari)
    try {
        newVari = "reassignment again with const"
    } catch (err) {
        console.error("TypeError: Assignment to constant variable.")
    }
}
letvar()
