func minCostClimbingStairs(cost []int) int {
	step1, step2 := 0, 0
	for i := len(cost) - 1; i >= 0; i-- {
		curr := cost[i] + min(step1, step2)
		step1 = step2
		step2 = curr
	}
	return min(step1, step2)
}

func min(x, y int) int {
	if x < y {
		return x
	}
	return y
}

//********************************************

func minCostClimbingStairs(cost []int) int {
	cost = append(cost, 0)
	for i := len(cost) - 3; i >= 0; i-- {
		cost[i] += min(cost[i+1], cost[i+2])
	}
	return min(cost[0], cost[1])
}

func min(i, j int) int {
	if i < j {
		return i
	}
	return j
}