package codewars

import (
	"reflect"
	"testing"
)

func TestDigitize(t *testing.T) {

	t.Run("Testing a positive number", func(t *testing.T) {
		got := Digitize(12345)
		want := []int{5, 4, 3, 2, 1}
		if !reflect.DeepEqual(got, want) {
			t.Errorf("got %v want %v", got, want)
		}
	})

	t.Run("Testing the number zero", func(t *testing.T) {
		got := Digitize(0)
		want := []int{0}
		if !reflect.DeepEqual(got, want) {
			t.Errorf("got %v want %v", got, want)
		}
	})
}
