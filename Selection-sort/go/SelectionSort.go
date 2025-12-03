package main

import (
	"fmt"
)

var arr = []int{64, 34, 25, 12, 22, 11, 90} 

func SelectionSort(arr []int, n int) {
    for i := 0; i < n-1; i++ {
        min := i
        for j := i + 1; j < n; j++ {
            if arr[j] < arr[min] {
                min = j
            }
        }
        temp := arr[min]
        arr[min] = arr[i]
        arr[i] = temp
    }
}


func main() {
	fmt.Println("Unsorted array:")
	fmt.Println(arr)
	SelectionSort(arr, len(arr))
	fmt.Println("Sorted array:")
	fmt.Println(arr)
}