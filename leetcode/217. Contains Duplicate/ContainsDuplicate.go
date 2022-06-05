func containsDuplicate(nums []int) bool {
    m := make(map[int]int)
    
    for _, val := range nums {
        _, ok := m[val]; if ok {
            return true
        } else {
            m[val] = 1
        }
    }
    return false
}
