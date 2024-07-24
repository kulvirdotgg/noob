// Activity 1
const p = new Promise((_respect, disrespect) => {
    disrespect("promise throwing an error")
})
async function handleError() {
    try {
        const res = await p
        console.log(res)
    } catch (error) {
        console.log("promise failed\nmsg:", error)
    }
}
handleError()

function divide(a: number, b: number) {
    return new Promise((respect, disrespect) => {
        if (b === 0) {
            disrespect("Division by 0 not possible")
        }
        respect(a / b)
    })
}
async function handleDivision(a: number, b: number) {
    try {
        const res = await divide(a, b)
        console.log(res)
    } catch (error) {
        console.log("error msg: ", error)
    }
}
handleDivision(10, 0)

// Activity 2
async function final(a: number, b: number) {
    try {
        const res = await divide(a, b)
        console.log(res)
    } catch (error) {
        console.log("error msg: ", error)
    } finally {
        console.log("Finally block getting executed")
    }
}
final(20, 5)

// Activity 3
class OwnError extends Error {
    constructor(errMsg: string) {
        super(errMsg)
        this.message = errMsg
    }
}
function againDiv(a: number, b: number) {
    if (b === 0) {
        throw new OwnError("division by zero not possible")
    } else {
        return a / b
    }
}
async function customErr(a: number, b: number) {
    try {
        const res = againDiv(a, b)
        console.log(res)
    } catch (error) {
        if (error instanceof OwnError) {
            console.log("msg from custom error: ", error.message)
        } else {
            console.log(error)
        }
    }
}
customErr(20, 0)

// Activity 4
const randomp = new Promise((respect, disrespect) => {
    const num = Math.random()
    if (num > 5) {
        disrespect("number should be greater than 5")
    }
    respect("number is great")
})

const res = randomp
    .then((msg) => {
        console.log(msg)
    })
    .catch((error) => console.log(error))

// Activity 5
const invalid = fetch("https://invalidadress.com")
    .then((val) => console.log(val))
    .catch((error) => console.log("error while fetching the url\n", error))
