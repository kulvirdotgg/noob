// Activity 1
console.log("---- Activity 1 ----")
function evenOdd(num: number) {
    if (num & 1) {
        console.log(num, "is a odd number")
    } else {
        console.log(num, "is a even number")
    }
}
evenOdd(69)

function square(num: number) {
    console.log("square of", num, "is", Math.pow(num, 2))
}
square(69)

// Activity 2
console.log("---- Activity 2 ----")
const add = function (num1: number, num2: number) {
    return num1 + num2
}
console.log("Addition of 20 and 30 using function expression", add(20, 30))

const cct = function (s: string, t: string) {
    return s.concat(t)
}
console.log(
    "concat of skill and issue using function expression",
    cct("skill", "issues"),
)

// Activity 3
console.log("---- Activity 3 ----")
const suma = (num1: number, num2: number) => {
    return num1 + num2
}
console.log("Addition of 69 and 420 using arrow fn.", suma(420, 69))

const contains = (s: string, t: string) => {
    return s.includes(t)
}
console.log(
    "does SKILLISSUES have issues present?",
    contains("Skillissues", "issues"),
)

// Activity 4
console.log("---- Activity 4 ----")
function prod(num1: number, num2: number = 1) {
    return num1 * num2
}
console.log("product of two numbers using default value of num2 as 1", prod(69))

function greet(name: string, age: number = 21) {
    console.log("Hello", name, "you are", age, "years old")
}
greet("Karpathy Sensei")

// Activity 5
console.log("---- Activity 5 ----")
function hof(num: number, func: () => void) {
    for (let i = 0; i < num; ++i) {
        func()
    }
}
hof(3, () => {
    console.log("Higher order function being called")
})

function sumofsquares(
    num1: number,
    num2: number,
    sq: (num: number) => number,
    sum: (num1: number, num2: number) => number,
): number {
    const sq1 = sq(num1)
    const sq2 = sq(num2)
    return sum(sq1, sq2)
}
const res = sumofsquares(
    69,
    420,
    (num: number) => Math.pow(num, 2),
    (num1: number, num2: number) => num1 + num2,
)
console.log("sum of squares of 69 and 420 is", res)
