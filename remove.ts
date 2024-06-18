String.prototype.IDK = function IDK(): string {
    let input = this
    input = input.removeAll("b")
    const output = input.removeAll("ac")
    return output
}

String.prototype.removeAll = function removeAll(find: string): string {
    let input = this
    let start = performance.now()
    while (input.includes(find)) {
        input = input.replaceAll(find, "")
    }
    const end = performance.now()
    console.log(end - start)
    return input
}

class stack<T> {
    items: T[] = []

    constructor() {
        this.items = []
    }

    push(element: T) {
        this.items.push(element)
    }

    pop() {
        if (this.items.length === 0) {
            throw new Error("sup sucker")
        }
        return this.items.pop()
    }

    top(): T | undefined {
        return this.items[this.items.length - 1]
    }

    isEmpty(): boolean {
        return this.items.length === 0
    }
}

String.prototype.stacked = function stacked(): string {
    const input = this

    const st: stack<string> = new stack()
    for (let idx = 0; idx < input.length; ++idx) {
        if (input[idx] === "b") continue

        if (input[idx] === "c" && st.top() === "a") {
            st.pop()
            continue
        }

        st.push(input[idx])
    }

    let output = ""
    while (st.isEmpty() === false) {
        output += st.top()
        st.pop()
    }
    return output
}

const input = "cabbaabcca"
console.log("output: ", input.stacked())

interface String {
    IDK(): string
    removeAll(find: string): string
    stacked(): string
}
