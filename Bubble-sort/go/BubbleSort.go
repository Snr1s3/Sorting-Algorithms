package main

import (
	"fmt"
)

var arr = []int{64, 34, 25, 12, 22, 11, 90} 

func BubbleSort(arr []int, n int) {
	var temp int
	var swap bool
	for j := 0; j < n-1; j++ {
		if arr[j] > arr[j+1] {
			temp = arr[j]
			arr[j] = arr[j+1]
			arr[j+1] = temp
			swap = true
		}
	}
	if !swap {
		return
	} else {
		BubbleSort(arr, n-1)
	}
}

func main() {
	fmt.Println("Unsorted array:")
	fmt.Println(arr)
	BubbleSort(arr, len(arr))
	fmt.Println("Sorted array:")
	fmt.Println(arr)
}