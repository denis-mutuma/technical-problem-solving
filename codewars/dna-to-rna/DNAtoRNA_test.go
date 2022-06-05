package codewars

import "testing"

type test struct {
	arg1, expected string
}

func TestDNAtoRNA(t *testing.T) {
	tests := []test{
		{"GCAT", "GCAU"},
	}

	for _, test := range tests {
		if got := DNAtoRNA(test.arg1); got != test.expected {
			t.Errorf("got %v expected %v", got, test.expected)
		}
	}
}
