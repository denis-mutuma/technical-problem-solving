package codewars

func RepeatStr(repetitions int, value string) string {
	res := ""
	for i := 0; i < repetitions; i++ {
		res += value
	}
	return res
}
