package codewars

func CheckForFactor(base int, factor int) bool {
	if base%factor != 0 {
		return false
	}
	return true
}
