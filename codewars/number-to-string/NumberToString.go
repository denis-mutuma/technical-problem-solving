package codewars

func NumberToString(num int) string {
	res := ""
	for num > 0 {
		temp := (num % 10) + '0'
		res += string(temp)
		num /= 10
	}
	finalRes := ""
	for i := len(res) - 1; i >= 0; i-- {
		finalRes += string(res[i])
	}
	return finalRes
}
