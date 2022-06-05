package codewars

import "testing"

type test struct {
	arg1     int
	expected string
}

func TestNumberToString(t *testing.T) {
	tests := []test{
		{67, "67"},
		{123, "123"},
		{999, "999"},
		//{0, "0"},
		//{-999, "-999"},
	}

	for _, test := range tests {
		if got := NumberToString(test.arg1); got != test.expected {
			t.Errorf("got %v expected %v", got, test.expected)
		}
	}
}
