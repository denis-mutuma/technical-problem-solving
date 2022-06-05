package codewars

func StringToNumber(str string) int {
	num := 0
	neg := 1
	for _, chr := range str {
		if chr == '-' {
			neg = -1
			continue
		}
		temp := chr - '0'
		num = num*10 + int(temp)
	}
	return neg * num
}
