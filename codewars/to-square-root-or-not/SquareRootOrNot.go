package codewars

import "math"

func SquareRootOrNot(arr []int) []int {

	res := make([]int, 0)

	for _, num := range arr {
		sqrt := math.Sqrt(float64(num))
		if sqrt-float64(int(sqrt)) > 0 {
			res = append(res, num*num)
		} else {
			res = append(res, int(sqrt))
		}
	}
	return res
}
