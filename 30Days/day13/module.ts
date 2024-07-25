function add(a: number, b: number): number {
    return a + b
}

const person = {
    hisName: "Uncle Bob",
    skill: "Skill Issues",
    getName() {
        return this.hisName
    },
}

export default function defFunc() {
    console.log("I am a default functional export")
}

export { add, person }
