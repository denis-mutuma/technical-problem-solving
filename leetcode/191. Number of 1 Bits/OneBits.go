// Solution one:

func hammingWeight(num uint32) int {
	var sum uint32
	for num > 0 {
		var temp uint32
		temp = num % 2
		sum += temp
		num = num >> 1
	}
	return int(sum)
}

//********************************

//Solution two:

func hammingWeight(num uint32) int {
	var sum uint32
	for num > 0 {
		num = num & (num - 1)
		sum++
	}
	return int(sum)
}