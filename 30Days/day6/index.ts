// Activity 1
console.log("---- Activity 1 ----")
const arr = [1, 2, 3, 4, 5]
arr.forEach((ele) => console.log(ele))

console.log("First element", arr[0], "last element", arr[arr.length - 1])

// Activity 2
console.log("---- Activity 2 ----")
console.log("array at begining", arr)
arr.push(69)
console.log("array after pushing 69: ", arr)
arr.pop()
console.log("array after removing last element ", arr)
arr.shift()
console.log("array after removing first element using shfit", arr)
arr.unshift(420)
console.log("array after adding 420 to start of array", arr)

// Activity 3
console.log("---- Activity 3 ----")
console.log("Original array", arr)
const doubleArr = arr.map((num) => num * 2)
console.log("Array after doubling each element using `map`", doubleArr)
const filterArr = arr.filter((num) => !(num & 1))
console.log("Array filtered to only even numbers", filterArr)
const sum = arr.reduce((num1, num2) => num1 + num2, 0)
console.log("sum of elements of array using reduce function", sum)

// Activity 4
console.log("---- Activity 4 ----")
for (let idx = 0; idx < arr.length; ++idx) console.log(arr[idx])

// Activity 5
console.log("---- Activity 5 ----")
const matrix = [
    [1, 2, 3],
    [4, 5, 6],
    [7, 8, 9],
]
console.log(matrix)
console.log("printing each element of the 2D array")
matrix.flat(Infinity).forEach((num) => console.log(num))

console.log("printing 1,2th index element from array")
console.log(matrix[1][2])
