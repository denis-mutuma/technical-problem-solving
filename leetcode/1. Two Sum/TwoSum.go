func twoSum(nums []int, target int) []int {
	comp := make(map[int]int)

	for index, value := range nums {
		if val, ok := comp[target-value]; ok {
			return []int{index, val}
		} else {
			comp[value] = index
		}
	}
	return nil
}