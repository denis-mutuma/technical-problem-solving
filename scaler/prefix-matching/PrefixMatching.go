/**
 * @input A : array of strings
 * @input B : String
 *
 * @Output Integer array.
 */
func solve(A []string, B string) []int {
	result := make([]int, 0)
	result = append(result, -1, -1)
	for i, str := range A {
		if len(str) < len(B) {
			continue
		}
		sliced := str[0:len(B)]
		if sliced == B && result[0] == -1 {
			result[0] = i
		}
		if sliced == B && result[0] != -1 {
			result[1] = i
		}
	}
	return result
}
