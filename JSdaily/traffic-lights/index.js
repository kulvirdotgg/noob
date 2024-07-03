function myLights() {
    const red = document.getElementsByClassName("red-light")
    const yellow = document.getElementsByClassName("yellow-light")
    const green = document.getElementsByClassName("green-light")

    console.log("I am here", red[0].classList)

    red[0].classList.replace("bg-white", "bg-rose-500")
    setTimeout(() => {
        red[0].classList.replace("bg-rose-500", "bg-white")

        green[0].classList.replace("bg-white", "bg-emerald-400")
    }, 120 * 100)

    setTimeout(() => {
        green[0].classList.replace("bg-emerald-400", "bg-white")

        yellow[0].classList.replace("bg-white", "bg-yellow-500")
    }, 60 * 100)

    setTimeout(() => {
        yellow[0].classList.replace("bg-yellow-500", "bg-white")
    }, 60 * 100)
}

function GoMyLights() {
    while (true) {
        myLights()
    }
}

GoMyLights()
