const hex = ["#fff", "#ffffff", "#abc123", "#000", "#1e1e1e"]

const hex2int = new Map<string, number>()
hex2int.set("a", 10)
hex2int.set("b", 11)
hex2int.set("c", 12)
hex2int.set("d", 13)
hex2int.set("e", 14)
hex2int.set("f", 15)

function color(hexDigits: string[]): number {
    let color = 0

    if (hex2int.has(hexDigits[0])) {
        const hx = hex2int.get(hexDigits[0])!
        color += hx * 16
    } else {
        const hx = parseInt(hexDigits[0])
        color += hx * 16
    }

    if (hex2int.has(hexDigits[1])) {
        const hx = hex2int.get(hexDigits[1])!
        color += hx % 16
    } else {
        const hx = parseInt(hexDigits[1])
        color += hx % 16
    }

    return color
}

function hexToRGBbrute(hex: string): string {
    let hexDigits = hex.substring(1).split("")

    if (hexDigits.length === 3) {
        const [r, g, b] = hexDigits
        hexDigits = [r, r, g, g, b, b]
    }

    let r: number = 0
    let g: number = 0
    let b: number = 0

    for (let idx = 0; idx < 6; idx += 2) {
        if (idx === 0) r = color(hexDigits.slice(idx, idx + 2))
        if (idx === 2) g = color(hexDigits.slice(idx, idx + 2))
        if (idx === 4) b = color(hexDigits.slice(idx, idx + 2))
    }
    return `RGBA(${r}, ${g}, ${b}, 1)`
}

console.log("===== Brute forcing the way =====")
hex.map((hex) => {
    console.log(hexToRGBbrute(hex))
})

function hexToRGBonceAgain(hex: string): string {
    let hexDigits = hex.substring(1).split("")

    if (hexDigits.length === 3) {
        const [r, g, b] = hexDigits
        hexDigits = [r, r, g, g, b, b]
    }

    const r = parseInt(hexDigits[0] + hexDigits[1], 16)
    const g = parseInt(hexDigits[2] + hexDigits[3], 16)
    const b = parseInt(hexDigits[4] + hexDigits[5], 16)

    return `RGBA(${r}, ${g}, ${b}, 1)`
}

console.log("===== some better solution =====")
hex.map((hex) => {
    console.log(hexToRGBonceAgain(hex))
})

function hexToRGB(hex: string): string {
    let hexDigits = hex.substring(1).split("")

    if (hexDigits.length === 3) {
        const [r, g, b] = hexDigits
        hexDigits = [r, r, g, g, b, b]
    }
    const hexNum = "0x" + hexDigits.join("")
    console.log("answer is ", hexNum)
    //let idk = parseInt(hexDigits.join(""), 16)

    const r = (+hexNum >> 16) & 255
    const g = (+hexNum >> 8) & 255
    const b = +hexNum & 255

    return `RGBA(${r}, ${g}, ${b}, 1)`
}

console.log("===== couldn't be more better =====")
hex.map((hex) => {
    console.log(hexToRGB(hex))
})

function rgbToHex(r: number, g: number, b: number) {
    let red = r.toString(16)
    if (red.length === 1) red = "0" + red

    let green = g.toString(16)
    if (green.length === 1) green = "0" + green

    let blue = b.toString(16)
    if (blue.length === 1) blue = "0" + blue

    return `#${red}${green}${blue}`
}

const rgbToHexbetter = (rgb: string) => {
    let [red, green, blue] = rgb
        .slice(4, -1)
        .split(",")
        .map((val) => {
            let color = parseInt(val).toString(16)
            if (color.length === 1) {
                color = "0" + color
            }
            return color
        })
    return `#${red}${green}${blue}`
}
console.log(rgbToHexbetter("RGB(255, 0, 69)"))

console.log(rgbToHex(255, 15, 69))
console.log(rgbToHex(0, 0, 0))
