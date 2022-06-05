package codewars

import "strings"

func IsPalindrome(str string) bool {

	s := strings.ToLower(str)

	left := 0
	right := len(str) - 1

	for left <= right {
		if s[left] == s[right] {
			left++
			right--
		} else {
			return false
		}
	}
	return true
}
