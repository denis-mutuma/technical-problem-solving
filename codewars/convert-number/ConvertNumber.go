package codewars

func Digitize(n int) []int {
	arr := make([]int, 0)
	if n == 0 {
		arr = append(arr, 0)
		return arr
	}

	for n > 0 {
		num := n % 10
		arr = append(arr, num)
		n /= 10
	}
	return arr
}
