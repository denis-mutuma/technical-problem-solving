package codewars

import "testing"

type stringTests struct {
	arg1           int
	arg2, expected string
}

func TestRepeatStr(t *testing.T) {
	tests := []stringTests{
		stringTests{6, "I", "IIIIII"},
		stringTests{5, "Hello", "HelloHelloHelloHelloHello"},
	}

	for _, test := range tests {
		if got := RepeatStr(test.arg1, test.arg2); got != test.expected {
			t.Errorf("got %v want %v", got, test.expected)
		}
	}
}
