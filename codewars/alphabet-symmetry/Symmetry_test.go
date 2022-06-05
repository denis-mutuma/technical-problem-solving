package codewars

import (
	"testing"
	"reflect"
)

type test struct {
	arg1 []string
	expected []int
}

func TestSymmetry(t *testing.T) {
	tests := []test{
		{[]string{"abode","ABc","xyzD"}, []int{4,3,1}},
		{[]string{"abide","ABc","xyz"}, []int{4,3,0}},
		{[]string{"IAMDEFANDJKL","thedefgh","xyzDEFghijabc"},[]int{6,5,7}},
		{[]string{"encode","abc","xyzD","ABmD"}, []int{1,3,1,3}},
	}

	for _, test := range tests {
		if got := Symmetry(test.arg1); !reflect.DeepEqual(got, test.expected) {
			t.Errorf("got %v expected %v", got, test.expected)
		}
	}
}