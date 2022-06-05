package codewars

import "strings"

func IsUpperCase(s string) bool {
	if string(s) == strings.ToUpper(string(s)) {
		return true
	}
	return false
}
