func containsDuplicate(nums []int) bool {
	m := make(map[int]int)

	for _, num := range nums {
		if _, ok := m[num]; ok {
			return true
		} else {
			m[num]++
		}
	}
	return false
}