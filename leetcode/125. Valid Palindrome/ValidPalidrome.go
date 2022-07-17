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

//**************************************

func isPalindrome(s string) bool {
	temp := make([]rune, 0)

	for _, chr := range s {
		if chr >= 'a' && chr <= 'z' {
			temp = append(temp, chr-'a')
		} else if chr >= 'A' && chr <= 'Z' {
			temp = append(temp, chr-'A')
		} else if chr >= '0' && chr <= '9' {
			temp = append(temp, chr-'a')
		}
	}

	low, high := 0, len(temp)-1

	for low < high {
		if temp[low] != temp[high] {
			return false
		}
		low++
		high--
	}
	return true
}
