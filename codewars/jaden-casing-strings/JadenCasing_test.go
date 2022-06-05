package codewars

import "testing"

type test struct {
	agr1, expected string
}

func TestJadenCasing(t *testing.T){
	tests := []test{
		{"most trees are blue", "Most Trees Are Blue"},
		{"All the rules in this world were made by someone no smarter than you. So make your own.", "All The Rules In This World Were Made By Someone No Smarter Than You. So Make Your Own."},
		{"When I die. then you will realize", "When I Die. Then You Will Realize"},
		{"Jonah Hill is a genius", "Jonah Hill Is A Genius"},
		{"Dying is mainstream", "Dying Is Mainstream"},
	}

	for _, test := range tests {
		if got := ToJadenCase(test.agr1); got != test.expected {
			t.Errorf("got %v expected %v", got, test.expected)
		}
	}
}