// Activity 1
console.log("---- Activity 1 ----")
const nm = "Ligma"
const age = 69
console.log(`${nm} is ${age} years old.`)
console.log(`Line 1\nLine 2\n...\nLine69.`)

// Activity 2
console.log("---- Activity 2 ----")
const arr = [69, 420, 1, 2]
const [first, second, ...rest] = arr
console.log("First element desructured is", first, "second is", second)

const book = {
    title: "1984",
    author: "George Orwell",
    year: 1948,
}
const { title, author } = book
console.log("Destructured title is", title, "and author is", author)

// Activity 3
console.log("---- Activity 3 ----")
const spreadArray = [...arr, "nice", "nice again"]
console.log("array made by spread operator", spreadArray)
function sum(...args: number[]) {
    let total: number = 0
    for (let arg of args) {
        total += arg
    }
    console.log("sum of", args, "is", total)
}
sum(69, 420, 1, 911)

// Activity 4
console.log("---- Activity 4 ----")
function twoSum(a: number, b: number = 1) {
    console.log("product of two with default value of 1 is", a * b)
}
twoSum(69)

// Activity 5
console.log("---- Activity 5 ----")
const obj = {
    nm,
    age,
    twoSum,
    arr,
}
console.log("Object created using enhanced object literal", obj)

const idkObj = {
    [nm]: "Some Name",
    [age]: "some age",
}
console.log("Object with variable as name", idkObj)
