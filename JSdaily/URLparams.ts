class MyURLparams {
    private URL: string
    private Params: Map<string, any[]>

    constructor(URL: string) {
        this.URL = URL
        this.Params = new Map()

        // NOTE: I am not validating the input URL, assuming it to be correct only
        const params = this.URL.substring(1).split("&")
        params.forEach((param) => {
            const [key, val] = param.split("=")

            // NOTE: Bloddy TS even though if condition checks for key in map
            // still I get maybe undefined in the IF block.
            if (this.Params.get(key)) {
                this.Params.get(key)?.push(val)
            } else {
                this.Params.set(key, [val])
            }
        })
    }

    get(param: string) {
        if (!this.Params.get(param)) {
            throw new Error(`Look at your URL, it doesn't have ${param} param`)
        }
        return this.Params.get(param)?.[0]
    }

    getAll(param: string) {
        if (!this.Params.get(param)) {
            throw new Error(`Look at your URL, it doesn't have ${param} param`)
        }
        return this.Params.get(param)
    }

    set(param: string, value: any) {
        this.Params.set(param, [value])
        this.URL += `&${param}=${value}`
    }

    append(param: string, value: any) {
        if (this.Params.get(param)) {
            this.Params.get(param)?.push(value)
        } else {
            throw new Error(`Look at your URL, it doesn't have ${param} param`)
        }
    }

    toString() {
        return this.URL
    }
}

const input = "?ligma=420&deez=69"

const url = new MyURLparams(input)
url.set("iladies", 420)
console.log(url.toString())

const params = new MyURLparams("?a=1&a=2&b=2")
console.log(params.get("a")) // '1'
console.log(params.getAll("a")) // ['1', '2']
console.log(params.get("b")) // '2'
console.log(params.getAll("b")) // ['2']

params.append("a", 3)
params.set("b", "3")
console.log(params.toString()) // 'a=1&a=2&b=3&a=3'
