package sort

func QuickSort(array []int) []int {
	return []int{}
}

func partition(arr []int, left, right int) int {
	pivot := arr[right]

	idx := left - 1

	for i := 0; i < right; i++ {
		if arr[i] <= pivot {
			idx++

			tmp := arr[i]
			arr[i] = arr[idx]
			arr[idx] = tmp
		}
	}
}

func sort(arr []int, left, right int) []int {
}
