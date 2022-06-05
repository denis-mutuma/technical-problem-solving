func isValid(s string) bool {
	stack := make([]rune, 0)
	for _, chr := range s {
		if chr == '(' || chr == '{' || chr == '[' {
			stack = append(stack, chr)
		}
		if chr == ')' {
			if len(stack) == 0 || stack[len(stack)-1] != '(' {
				return false
			} else {
				stack = stack[:len(stack)-1]
			}
		} else if chr == '}' {
			if len(stack) == 0 || stack[len(stack)-1] != '{' {
				return false
			} else {
				stack = stack[:len(stack)-1]
			}
		} else if chr == ']' {
			if len(stack) == 0 || stack[len(stack)-1] != '[' {
				return false
			} else {
				stack = stack[:len(stack)-1]
			}
		}
	}
	if len(stack) > 0 {
		return false
	}
	return true
}