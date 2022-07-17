func maxSubArray(nums []int) int {
	sum, maxSum := 0, nums[0]

	for _, num := range nums {
		sum += num
		maxSum = max(maxSum, sum)
		if sum < 0 {
			sum = 0
		}
	}
	return maxSum
}

func max(x, y int) int {
	if x > y {
		return x
	}
	return y
}