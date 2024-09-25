def mergeSort(arr, l, m, r):
    s1 = m - l + 1
    s2 = r - m
    aL = [0] * s1
    aR = [0] * s2
    i = 0
    j = 0
    k = l

    for i in range(s1):
        aL[i] = arr[l + i]
    for j in range(s2):
        aR[j] = arr[m + 1 + j]

    i = 0
    j = 0

    while i < s1 and j < s2:
        if aL[i] <= aR[j]:
            arr[k] = aL[i]
            i += 1
        else:
            arr[k] = aR[j]
            j += 1
        k += 1

    while i < s1:
        arr[k] = aL[i]
        i += 1
        k += 1

    while j < s2:
        arr[k] = aR[j]
        j += 1
        k += 1
        
def sort(arr, l, r):
    if (l < r):
        m = l + (r - l) // 2
        sort(arr, l, m)
        sort(arr, m + 1, r)
        mergeSort(arr, l, m, r)

arr = [64, 34, 25, 12, 22, 11, 90]
print("Unsorted array:")
for i in range(len(arr)):
    print(arr[i], end=" ")
print()
sort(arr, 0, len(arr)-1)
print("Sorted array:")
for i in range(len(arr)):
    print(arr[i], end=" ")
print()