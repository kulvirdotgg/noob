// Activity 1
console.log("---- Activity 1 ----")

let arr: { num: number }[] = []
for (let num = 1; num <= 10; ++num) {
    arr.push({ num: num })
}
console.log("1 - 10 counting")
console.table(arr)

for (let num = 1; num <= 10; ++num) {
    const idx = num - 1
    arr[idx] = { num: 5 * num }
}
console.log("Table of 5")
console.table(arr)

// Activity 2
console.log("---- Activity 2 ----")
let num = 1
let sum = 0
while (num <= 10) {
    sum += num
    ++num
}
console.log("Sum of first 10 numbers is", sum)
while (num > 0) {
    const idx = 10 - num
    arr[idx] = { num }
    --num
}
console.log("10 - 1 is reverse order")
console.table(arr)

// Activity 3
console.log("---- Activity 3 ----")
const newArr: { num: number }[] = []
let idk = 1
do {
    newArr.push({ num: idk })
    ++idk
} while (idk <= 5)
console.log("1 to 5 using do while loop")
console.table(newArr)

let fact = 1
do {
    fact *= idk - 1
    --idk
} while (idk > 1)
console.log("Factorial of 5 using do while loop", fact)

// Activity 4
console.log("---- Activity 4 ----")
for (let row = 1; row <= 5; ++row) {
    let star = ""
    for (let col = 0; col < row; ++col) {
        star += "*"
    }
    console.log(star)
}

// Activity 5
console.log("---- Activity 5 ----")
arr = []
for (let num = 0; num < 10; ++num) {
    if (num == 5) continue
    arr.push({ num })
}
console.table(arr)

arr = []
for (let num = 0; num < 10; ++num) {
    if (num == 7) break
    arr.push({ num })
}
console.table(arr)
