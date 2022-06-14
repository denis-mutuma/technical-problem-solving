func groupAnagrams(strs []string) [][]string {

	res := make([][]string, 0)
	groups := make(map[string][]string)

	for _, str := range strs {
		var charCount [26]int

		for _, chr := range str {
			charCount[chr-'a']++
		}

		key := ""

		for i, v := range charCount {
			pair := strconv.Itoa(i) + "," + strconv.Itoa(v)
			key += pair
		}
		groups[key] = append(groups[key], str)
	}
	for _, group := range groups {
		res = append(res, group)
	}
	return res
}
