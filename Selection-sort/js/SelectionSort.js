function selectionSort(arr, n) {
    for(let i = 0; i<n - 1;i++){
        let min = i;
        for(let j = i + 1; j< n;j++){
            if (arr[j] < arr[min]) {
                min = j;
            }
        }
        let temp = arr[min];
        arr[min] = arr[i];
        arr[i] = temp;
    }
}

let arr = [64, 34, 25, 12, 22, 11, 90];
console.log("Unsorted array:");
for (let i = 0; i < arr.length; i++) {
    process.stdout.write(arr[i] + " ");
}
console.log();
selectionSort(arr, arr.length);
console.log("Sorted array:");
for (let i = 0; i < arr.length; i++) {
    process.stdout.write(arr[i] + " ");
}
console.log();