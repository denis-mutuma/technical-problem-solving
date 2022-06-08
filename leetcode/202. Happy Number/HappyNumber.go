// Solution 1:

func isHappy(n int) bool {

	m := make(map[int]int)

	for {
		sum := 0

		m[n] = 1

		for n > 0 {
			temp := n % 10
			sum += temp * temp
			n /= 10
		}
		n = sum

		if sum == 1 {
			return true
		}

		if _, ok := m[n]; ok {
			return false
		}
	}
	return false
}

//Solution 2:

func isHappy(n int) bool {
	count := 0
	for {
		sum := 0
		for n > 0 {
			temp := n % 10
			sum += temp * temp
			n /= 10
		}
		n = sum
		if sum == 1 {
			return true
		}
		count++
		if count > 2^32-1 {
			return false
		}
	}
	return false
}