package codewars

import "testing"

type test struct {
	arg1     string
	expected bool
}

func TestIsPalindrome(t *testing.T) {
	tests := []test{
		{"a", true},
		{"aba", true},
		{"Abba", true},
		{"hello", false},
	}

	for _, test := range tests {
		if got := IsPalindrome(test.arg1); got != test.expected {
			t.Errorf("got %v expected %v", got, test.expected)
		}
	}
}
