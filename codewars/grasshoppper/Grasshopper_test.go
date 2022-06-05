package codewars

import "testing"

type test struct {
	arg1, arg2 int
	expected   bool
}

func TestCheckForFactor(t *testing.T) {
	tests := []test{
		{10, 2, true},
		{63, 7, true},
		{2450, 5, true},
		{24612, 3, true},
		{9, 2, false},
		{653, 7, false},
		{2453, 5, false},
		{24617, 3, false},
	}

	for _, test := range tests {
		if got := CheckForFactor(test.arg1, test.arg2); got != test.expected {
			t.Errorf("got %v expected %v", got, test.expected)
		}
	}
}
