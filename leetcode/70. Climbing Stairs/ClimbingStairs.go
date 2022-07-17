func climbStairs(n int) int {

	if n <= 2 {
		return n
	}
	prev1, prev2 := 1, 2
	next := 0
	for i := 3; i <= n; i++ {
		next = prev1 + prev2
		prev1 = prev2
		prev2 = next
	}
	return next
}

*******************************

func climbStairs(n int) int {
    res := make([]int, n+1)
    res[0] = 1
    res[1] = 1
    for i := 2; i <= n; i++ {
        res[i] = res[i-1] + res[i-2]
    }
    return res[n]
}