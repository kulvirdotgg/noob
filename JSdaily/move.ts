function decipher(cipher: string[][]): string {
    const rows = cipher.length
    const cols = cipher[0].length

    let r = 0
    let c = 0
    let decodedMsg = ""
    while (rows >= 0 && c < cols) {
        // diagonal up-right
        decodedMsg = decodedMsg.concat(cipher[r][c])
        if (r == rows - 1) {
            --r
            ++c
        } else {
            // diagonal down-right
            ++r
            ++c
        }
    }
    return decodedMsg
}

const cipher: string[][] = [
    ["I", "B", "C", "A", "L", "K", "A"],
    ["D", "R", "F", "C", "A", "E", "A"],
    ["G", "H", "O", "E", "L", "A", "D"],
]

console.log(decipher(cipher))
