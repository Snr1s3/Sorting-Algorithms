def bubbleSort(arr, n):
    tmp = 0
    swap = False
    for i in range(n - 1):
        if(arr[i] > arr[i + 1]):
            tmp = arr[i]
            arr[i] = arr[i + 1]
            arr[i + 1] = tmp
            swap = True
    if not swap:
        return
    else:
        bubbleSort(arr, n - 1)

arr = [64, 34, 25, 12, 22, 11, 90]
print("Unsorted array:")
for i in range(len(arr)):
    print(arr[i], end=" ")
print()
bubbleSort(arr, len(arr))
print("Sorted array:")
for i in range(len(arr)):
    print(arr[i], end=" ")
print()