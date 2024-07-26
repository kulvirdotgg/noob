// Activity 1
console.log("---- Activity 1 ----")
class Person {
    age
    constructor() {
        this._name = "Skill Issue"
        this.age = 69
    }

    static statMethod() {
        console.log("Greeting from static method")
    }

    greet() {
        console.log("Hiii", this._name, "Your age is", this.age)
    }

    get name() {
        return this._name
    }

    set name(newName) {
        this._name = newName
    }
}
const p = new Person()
p.greet()

Person.prototype.update = function(age) {
    this.age = age
}
p.update(10)
console.log("Greeting of person after update method")
p.greet()

// Activity 2
console.log("---- Activity 2 ----")
class Student extends Person {
    studentId
    static count = 0
    constructor() {
        super()
        this.studentId = "69420"
        Student.count++
    }

    greet() {
        console.log("Hii", this.name, "Your id is", this.studentId)
    }
    getId() {
        console.log("student id is", this.studentId)
    }
    static getCount() {
        console.log("The no of times student created", Student.count)
    }
}
const s = new Student()
s.getId()

console.log("overrided greet method is: ")
s.greet()

// Activity 3
console.log("---- Activity 3 ----")
Person.statMethod()
Student.getCount()

// Activity 4
console.log("---- Activity 4 ----")
console.log("The name of person vai getter method", p.name)
p.name = "noob"
console.log("The name of person vai getter method after setter", p.name)

// Activity 5
console.log("---- Activity 5 ----")
class Account {
    #balance

    constructor() {
        this.#balance = 69
    }

    get balance() {
        return this.#balance
    }

    deposit() {
        this.#balance += 420
    }

    withdraw() {
        this.#balance -= 69
    }

}
const b = new Account()
b.deposit()
console.log("balance after deposititg", b.balance)
b.withdraw()
console.log("balance after withdraw", b.balance)
