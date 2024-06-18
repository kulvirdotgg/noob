type Handler = (...args: any[]) => void

class myEvents {
    private events: Map<string, Handler[]>

    constructor() {
        this.events = new Map()
    }

    on(event: string, callback: Handler) {
        if (!this.events.has(event)) {
            this.events.set(event, [])
        }
        this.events.get(event)?.push(callback)
    }

    emit(event: string, ...args: any[]) {
        const events = this.events.get(event)

        events?.forEach((event) => {
            event(...args)
        })
    }
}

const emiter = new myEvents()

function onEventA(message: string) {
    console.log(`Event A received with message: ${message}`)
}

function onEventB(number: number) {
    console.log(`Event B received with number: ${number}`)
}

emiter.on("event A", onEventA)
emiter.on("event A", (msg: string) => {
    console.log("welcome back again MF:", msg)
})
emiter.on("event B", onEventB)

emiter.emit("event A", "69")
emiter.emit("event B", 69)
