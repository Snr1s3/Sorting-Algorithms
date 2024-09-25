function bubbleSort(arr, n){
    let tmp = 0
    let swap = false
    for (let i = 0; i < n - 1; i++) {
        if(arr[i] > arr[i + 1])
        {
            tmp = arr[i]
            arr[i] = arr[i + 1]
            arr[i + 1] = tmp
            swap = true
        }
    }
    if(!swap){
        return
    }
    else{
        bubbleSort(arr, n - 1)
    }
}

let arr = [64, 34, 25, 12, 22, 11, 90];
console.log("Unsorted array:")
for (let i = 0; i < arr.length; i++) {
    process.stdout.write(arr[i] + " ");
}
console.log();
bubbleSort(arr, arr.length)
console.log("Sorted array:")
for (let i = 0; i < arr.length; i++) {
    process.stdout.write(arr[i] + " ");
}
console.log();