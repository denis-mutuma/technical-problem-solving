package codewars

import (
	"testing"
)

type test struct {
	arg1     string
	expected bool
}

func TestIsUpperCase(t *testing.T) {
	tests := []test{
		{"abcdefghijklmnopqrstuvwxyz", false},
		{"ABCDEFGHIJKLMNOPQRSTUVWXYz", false},
		{"false", false},
		{"true", false},
		{"False", false},
		{"True", false},
		{"WHAT DOES THE FOX SAY", true},
		{"HTML CSS JAVASCRIPT PYTHON C PERL LISP JAVA GO RUBY NODEJS RUST SCALA", true},
	}

	for _, test := range tests {
		if got := IsUpperCase(test.arg1); got != test.expected {
			t.Errorf("got %v expected %v", got, test.expected)
		}
	}
}
