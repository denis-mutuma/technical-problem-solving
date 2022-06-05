func isPalindrome(s string) bool {
	reg, _ := regexp.Compile("[^A-Za-z0-9]+")
	temp := reg.ReplaceAllString(s, "")
	str := strings.ToLower(temp)

	left, right := 0, len(str)-1

	for left <= right {
		if str[left] == str[right] {
			left++
			right--
		} else {
			return false
		}
	}
	return true
}
