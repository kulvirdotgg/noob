// Activity 1
console.log("---- Activity 1 ----")
const p = new Promise(function (respect) {
    setTimeout(() => {
        respect("p is respected")
    }, 2000)
})
console.log(p.then((msg) => console.log(msg)))

const pr = new Promise(function (_respect, disrespect) {
    setTimeout(() => {
        disrespect("disrespected the promise")
    }, 2000)
})
console.log(
    pr
        .then((msg) => console.log(msg))
        .catch((error) => {
            console.log(error)
        }),
)

// Activity 2
console.log("---- Activity 2 ----")

function mock() {
    return new Promise(function (respect, disrespect) {
        const num = Math.random() * 10
        if (num > 5) {
            respect("more than 5")
        } else {
            disrespect("less than 5")
        }
    })
}
mock()
    .then((data) => {
        console.log(data)
        return mock()
    })
    .then((data) => {
        console.log(data)
    })
    .catch((error) => console.log("err in fetching is", error))
    .finally(() => console.log("Data fetching is done"))
console.log("staart fetch")

// Activity 3
console.log("---- Activity 3 ----")
;(async function () {
    const res = await p
    console.log("async/await", res)
})()
;(async function () {
    try {
        const res = await pr
        console.log(res)
    } catch (error) {
        console.log("async/await promise rejected", error)
    }
})()

// Activity 5
console.log("---- Activity 5 ----")
const prs = [mock(), mock()]
Promise.all(prs)
    .then((data) => {
        console.log("in promises.all idk why")
        console.log(data)
    })
    .catch((error) => {
        console.log(error)
    })

Promise.race(prs)
    .then((data) => {
        console.log("in promise.race idk")
        console.log(data)
    })
    .catch((error) => {
        console.log(error)
    })
