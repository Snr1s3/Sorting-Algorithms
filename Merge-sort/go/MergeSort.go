package main

import (
	"fmt"
)

var arr = []int{64, 34, 25, 12, 22, 11, 90} 

func merge(arr []int, l, m, r int) {
    s1 := m - l + 1
    s2 := r - m

    aL := make([]int, s1)
    aR := make([]int, s2)

    for i := 0; i < s1; i++ {
        aL[i] = arr[l+i]
    }
    for j := 0; j < s2; j++ {
        aR[j] = arr[m+1+j]
    }

    i, j, k := 0, 0, l
    for i < s1 && j < s2 {
        if aL[i] <= aR[j] {
            arr[k] = aL[i]
            i++
        } else {
            arr[k] = aR[j]
            j++
        }
        k++
    }

    for i < s1 {
        arr[k] = aL[i]
        i++
        k++
    }
    for j < s2 {
        arr[k] = aR[j]
        j++
        k++
    }
}

func sort(arr []int, l, r int) {
    if l < r {
        m := l + (r-l)/2
        sort(arr, l, m)
        sort(arr, m+1, r)
        merge(arr, l, m, r)
    }
}

func main() {
	fmt.Println("Unsorted array:")
	fmt.Println(arr)
	sort(arr, 0, len(arr)-1)
	fmt.Println("Sorted array:")
	fmt.Println(arr)
}