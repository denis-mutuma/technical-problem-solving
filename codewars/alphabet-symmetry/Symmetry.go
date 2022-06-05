package codewars

import (
	"strings"
	)
  
  
  func Symmetry(slice []string) []int {
	str := make([]string, 0)
	
	alph := make(map[string]int)
	alph = map[string]int{"a": 1, "b": 2, "c": 3, "d": 4, "e": 5, "f": 6, "g":7, "h": 8,
						 "i": 9, "j":10, "k":11, "l":12, "m":13, "n":14, "o":15, "p":16,
						  "q":17, "r":18, "s":19, "t":20, "u":21, "v":22, "w":23, "x":24, "y":25, "z":26}
	
	for _, word := range slice {
	  str = append(str, strings.ToLower(word))
	}
	
	result := make([]int,0)
	
	for _, word := range str {
	  count := 0
	  for i, chr := range word {
		if i + 1 == alph[string(chr)]{
		  count++
		}
	  }
	  result = append(result,count)
	}
	
	return result
  }