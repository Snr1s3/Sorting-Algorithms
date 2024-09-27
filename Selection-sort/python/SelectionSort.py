def selectionSort(arr, n):
    for i in range(n-1):
        min = i
        j = i + 1
        for j in range(i+1, n):
            if (arr[j] < arr[min]):
                min = j
        temp = arr[min]
        arr[min] = arr[i]
        arr[i] = temp
                

arr = [64, 34, 25, 12, 22, 11, 90]
print("Unsorted array:")
for i in range(len(arr)):
    print(arr[i], end=" ")
print()
selectionSort(arr, len(arr))
print("Sorted array:")
for i in range(len(arr)):
    print(arr[i], end=" ")
print()