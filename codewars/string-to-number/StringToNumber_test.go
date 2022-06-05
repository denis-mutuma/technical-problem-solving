package codewars

import "testing"

type test struct {
	arg1     string
	expected int
}

func TestStringToNumber(t *testing.T) {
	tests := []test{
		{"1234", 1234},
		{"605", 605},
		{"1405", 1405},
		{"-7", -7},
	}
	for _, test := range tests {
		if got := StringToNumber(test.arg1); got != test.expected {
			t.Errorf("got %v expected %v", got, test.expected)
		}
	}

}
