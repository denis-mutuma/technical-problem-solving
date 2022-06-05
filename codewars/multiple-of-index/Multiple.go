package codewars

func MultipleOfIndex(ints []int) []int {
	// good luck
	arr := make([]int, 0)
	for i := 1; i < len(ints); i++ {
		if ints[i]%i == 0 {
			arr = append(arr, ints[i])
		}
	}
	return arr
}
