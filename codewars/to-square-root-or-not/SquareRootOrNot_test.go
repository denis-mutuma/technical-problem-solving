package codewars

import (
	"testing"
	"reflect"
)

type test struct {
	arg1 []int
	expected []int
}

func TestSquareRootOrNot(t *testing.T) {
	tests := []test{
		{[]int{4, 3, 9, 7, 2, 1}, []int{2, 9, 3, 49, 4, 1}},
		{[]int{100, 101, 5, 5, 1, 1}, []int{10, 10201, 25, 25, 1, 1}},
		{[]int{1, 2, 3, 4, 5, 6}, []int{1, 4, 9, 2, 25, 36}},
	}
	
	for _, test := range tests {
		if got := SquareRootOrNot(test.arg1); !reflect.DeepEqual(got, test.expected)  {
			t.Errorf("got %v expected %v", got, test.expected)
		}
	}
}