// Acticity1
console.log("---- Activity 1 ----")
const num = 11
if (num > 0) {
    console.log("Num is", num, "and greater than 0")
} else if (num < 0) {
    console.log("Num is", num, "and less than 0")
} else {
    console.log("Num is", num, "and equal than 0")
}

function canVote(age) {
    if (age >= 18) {
        console.log("Age is", age, "and they can vote")
    } else {
        console.log("Age is", age, "and they cannot vote")
    }
}
canVote(21)

// Actitivy 2
console.log("---- Activity 2 ----")
function largest(a, b, c) {
    if (a > b) {
        if (a > c) {
            console.log("out of 3 numbers:", a, b, c, "largest is", a)
        } else {
            console.log("out of 3 numbers:", a, b, c, "largest is", c)
        }
    } else {
        if (b > c) {
            console.log("out of 3 numbers:", a, b, c, "largest is", b)
        } else {
            console.log("out of 3 numbers:", a, b, c, "largest is", c)
        }
    }
}
largest(11, 20, 12)

//Activity 3
console.log("---- Activity 3 ----")
function day(num) {
    switch (num) {
        case 1:
            console.log(num, "day is", "Monday")
            break
        case 2:
            console.log(num, "day is", "Tuesday")
            break
        case 3:
            console.log(num, "day is", "Wednesday")
            break
        case 4:
            console.log(num, "day is", "Thursday")
            break
        case 5:
            console.log(num, "day is", "Friday")
            break
        case 6:
            console.log(num, "day is", "Saturday")
            break
        case 7:
            console.log(num, "day is", "Sunday")
            break
    }
}
day(5)



// Activity 4
console.log("---- Activity 4 ----")
const ele = 69
function isEven(num) {
    return !(num & 1)
}

isEven(ele) ? console.log(ele, "is a Even num") : console.log(ele, "is odd")

// Activity 5
console.log("---- Activity 5 ----")
function leap(year) {
    if (year % 400 === 0) {
        console.log(year, "is a leap year")
    } else if (year % 4 === 0 && (year % 100 !== 0)) {
        console.log(year, "is a leap year")
    } else {
        console.log(year, "is not a leap year")
    }
}
leap(2024)
leap(2400)
leap(2100)
