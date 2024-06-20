function reduce(str: string, k: number): string {
    while (k < str.length) {
        let div = 0
        let sums = ""
        let sum = 0
        for (let idx = 0; idx < str.length; ++idx) {
            sum += Number(str[idx])
            ++div
            if (div === k || idx == str.length - 1) {
                sums += sum.toString()
                sum = 0
                div = 0
            }
        }
        str = sums
    }
    return str
}

function sum(input: string): number {
    return input.split("").reduce((a, b) => {
        return Number(a) + Number(b)
    })
}

function split(str: string, k: number): string {
    while (k < str.length) {
        let sums = ""
        for (let idx = 0; idx < str.length; idx += k) {
            const substr = str.slice(idx, idx + k)

            sums += sum(substr).toString()
        }
        str = sums
    }
    return str
}

function reduceStr(str, num) {
    let finalstr = str
    let flag = true
    while (flag) {
        let strArr = finalstr.split("")
        let length = finalstr.length
        let dividerIdx = num - 1
        finalstr = ""

        strArr.reduce((acc, currval, currentIdx) => {
            let ans = acc + parseInt(currval)
            if (currentIdx == dividerIdx || currentIdx == length - 1) {
                finalstr = finalstr + `${ans}`
                dividerIdx += num
                ans = 0
            }

            return ans
        }, 0)

        if (finalstr.length <= num) {
            flag = false
        }
    }
    return finalstr
}

console.log(reduceStr("987654321", 3))

const input = "1111123212"
const ip2 = "987654321"
// 24 + 15 + 6 = 24156
// 7 + 11 = 711
console.log(reduceStr(input, 3))
