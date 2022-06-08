func plusOne(digits []int) []int {
	carry, i := 0, len(digits)-1

	for i >= 0 {
		if digits[i] == 9 {
			digits[i] = 0
			carry = 1
			i--

			for carry == 1 && i >= 0 {
				if digits[i] == 9 {
					digits[i] = 0
					i--
				} else {
					digits[i] += 1
					carry = 0
					return digits
				}
			}
		} else {
			digits[i] += 1
			return digits
		}
		i--
	}

	if carry == 1 {
		digits = append([]int{1}, digits[0:]...)
	}

	return digits
}