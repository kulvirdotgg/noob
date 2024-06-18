const arr = [1, 2, [3, 4], [5, [6]], [7, [8, [9]]]]
// [0, 1, [2, [3, [4, 5, [6, [7], [8], [9]]]]]]

type Nest<T> = T | Array<Nest<T>>

function myOwn<T>(arr: Nest<T>, depth: number = 1): Nest<T> {
    const flatted: Nest<T>[] = []

    function flatMyArray(arr: Nest<T>, depth: number, idx: number) {
        if (idx === arr.length) {
            return
        }
        const curr = arr[idx]

        if (Array.isArray(curr) && (depth || depth === Infinity)) {
            flatMyArray(curr, depth - 1, 0)
        } else {
            flatted.push(curr)
        }
        flatMyArray(arr, depth, idx + 1)
    }

    flatMyArray(arr, depth, 0)
    return flatted
}

// function myOwn<T>(arr: Nest<T>, depth: number = 1): Nest<T> {
//   const flatted: Nest<T>[] = [];
//
//   function flatMyArray(arr: Nest<T>, depth: number) {
//     for (let idx = 0; idx < arr.length; ++idx) {
//       const curr = arr[idx];
//       if (Array.isArray(curr) && (depth || depth === Infinity)) {
//         flatMyArray(curr, depth - 1);
//       } else {
//         flatted.push(curr);
//       }
//     }
//   }
//
//   flatMyArray(arr, depth);
//   return flatted;
// }

const fl = myOwn(arr, Infinity)
console.log(fl)
