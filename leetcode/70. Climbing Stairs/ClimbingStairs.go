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