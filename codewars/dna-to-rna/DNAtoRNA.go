package codewars

func DNAtoRNA(dna string) string {
	// your code here
	// create empty string to store the result
	// loop through the dna argument
	// if char == "T" replace it with "U"

	result := ""
	for _, chr := range dna {
		if chr == 'T' {
			result += string('U')
		} else {
			result += string(chr)
		}
	}
	return result
}
