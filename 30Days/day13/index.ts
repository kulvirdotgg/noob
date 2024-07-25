import { camelCase } from "lodash"

import { add, person } from "./module.ts"
import defFunc from "./module.ts"
import * as everything from "./module.ts"

// Activity 1
console.log("---- Activity 1 ----")
console.log("addition of two numbers from exported function")
console.log(add(69, 420))
console.log("imported person obj has name", person.getName())

// Activity 2
console.log("---- Activity 2 ----")
console.log("named function export add", add)
console.log("default export function", defFunc)

// Activity 3
console.log("---- Activity 3 ----")
console.log("imported as everything, person name", everything.person.getName())

// activity 4
console.log("---- activity 4 ----")
const name = "UNCLE BOB"
console.log("name b4", name, "after lodash camelcase", camelCase(name))

// activity 5
console.log("---- activity 5 ----")
console.log("using ESBUILD coz we love GO, all my homeies hate WEBPACK")
console.log("following script is used to bundle all the files into build.js")
console.log("esbuild index.ts --bundle --outfile=build.js")
console.log("to check the output, run the build.js file using bun build.js")
console.log("Running this file from the build file by esbuild")
