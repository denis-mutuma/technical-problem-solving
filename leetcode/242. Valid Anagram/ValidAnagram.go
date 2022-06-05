func isAnagram(s string, t string) bool {
	if len(s) != len(t) {
		return false
	}

	countS := make(map[byte]int)
	countT := make(map[byte]int)

	for i := 0; i < len(s); i++ {
		if _, ok := countS[s[i]]; ok {
			countS[s[i]]++
		} else {
			countS[s[i]] = 1
		}

		if _, ok := countT[t[i]]; ok {
			countT[t[i]]++
		} else {
			countT[t[i]] = 1
		}
	}

	if len(countS) != len(countT) {
		return false
	}

	for k, v := range countS {
		vT, ok := countT[k]
		if vT != v || !ok {
			return false
		}
	}
	return true
}