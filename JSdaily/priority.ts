class LazyMan {
    name: string
    logginFn: (...args: any[]) => void

    constructor(name: string, logginFn: (...args: any[]) => void) {
        this.name = name
        this.logginFn = logginFn
        this.logginFn("Hi, I am", this.name)
    }

    eat(food: string) {
        this.logginFn("Eat", food)
        return this
    }

    sleep() {
        return this
    }
}

new LazyMan("Jack", console.error).eat("banana").eat("apple")
