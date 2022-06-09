func countBits(n int) []int {
	res := make([]int, 0)
	i := 0
	for i <= n {
		num := numberOnes(i)
		res = append(res, num)
		i++
	}
	return res
}

func numberOnes(n int) int {
	res := 0
	for n > 0 {
		temp := n % 2
		res += temp
		n = n >> 1
	}
	return res
}