package sort

import (
	"reflect"
	"testing"
)

func TestSort(t *testing.T) {
	array := []int{}

	got := QuickSort(array)
	want := []int{}

	if !reflect.DeepEqual(got, want) {
		t.Errorf("got %d want %d", got, want)
	}
}
