func maxSubArray(nums []int) int {
	if len(nums) == 1 {
		return nums[0]
	}

	maxSum := nums[0]
	sum := 0

	for _, num := range nums {
		sum += num
		if sum > maxSum {
			maxSum = sum
		}
		if sum < 0 {
			sum = 0
		}
	}
	return maxSum
}