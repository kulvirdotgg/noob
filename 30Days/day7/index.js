// Activity 1
console.log("---- Activity 1 ----")
const book = {
    title: "1984",
    author: "Goerge Orwell",
    year: 1948,
}
console.log(book)
console.log("The title of book is", book.title, "and author is", book.author)

// Activity 2
console.log("---- Activity 2 ----")
book.getData = function() {
    console.log(
        "The title of book is",
        this.title,
        "and author is",
        this.author,
    )
}
book.getData()

console.log("Book object before updating year", book)
book.updateYear = function(year) {
    this.year = year
}
book.updateYear(2024)
console.log("Book object after updating year", book)

// Activity 3
console.log("---- Activity 3 ----")
const lib = {
    name: "3rd class library",
    books: [
        book,
        book,
        book
    ]
}
console.log(lib.name, "has following book", lib.books)
for (let book of lib.books) {
    console.log(book.title)
}

// Activity 5
console.log("---- Activity 5 ----")
for (let prop in book) {
    console.log(prop, book[prop])
}

const keys = Object.keys(book)
const values = Object.values(book)
console.log(keys)
console.log(values)
