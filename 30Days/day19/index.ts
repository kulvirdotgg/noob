// Activity 1
console.log("---- Activity 1 ----")
const re = /js/g
const js = "js is a very bad, fr js is bad"
console.log("Regex to match js", js.match(re))

const digitre = /\[0-9]+/g
const digits = "01 02 10 20,30"
console.log("regex to amtch digits", digits.match(digitre))

// Activity 2
console.log("---- Activity 2 ----")
const wordre = /[A-Z][a-z]*/g
const word = "word Wor3 War A Criminal"
console.log("regex to match words with capital letters", word.match(wordre))

// Activity 3
console.log("---- Activity 3 ----")
const phonere = /(\([1-9]\d{2}\))(\d{3}\-\d{4})/g
const phone = "(123)456-7890"
let match = phonere.exec(phone)
console.log(match?.[1], match?.[2])

const email = "skil-issue@you.com"
const emailre = /([a-zA-Z0-9._-]+)@([a-zA-Z]{2,4})./g
match = emailre.exec(email)
console.log("username in email is", match?.[1])
console.log("domain of email is", match?.[2])

// Activity 4
console.log("---- Activity 4 ----")
const startre = /^\w+/g
//const js = "js is a very bad, fr js is bad"
console.log("capturing starting word of string", js.match(startre))
const endre = /\w+$/g
console.log("end word os the string", js.match(endre))

// Activity 5
console.log("---- Activity 5 ----")
const password = "somet098hue0898"
const url = "https://skill-issue.ac.in/query?why"
const urlre =
    /(https?:\/\/)?(www.)?([A-Za-z0-9.?-]+\.[a-zA-Z]{2,})(\/[a-zA-Z0-9-_?=&%]*)?/g
console.log(url.match(urlre))
