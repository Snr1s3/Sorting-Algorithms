function mergeSort(arr, l, m, r) {
    let s1 = m - l + 1;
    let s2 = r - m;
    let aL = new Array(s1);
    let aR = new Array(s2);

    for (let i = 0; i < s1; i++) {
        aL[i] = arr[l + i];
    }
    for (let j = 0; j < s2; j++) {
        aR[j] = arr[m + 1 + j];
    }

    let i = 0, j = 0, k = l;
    while (i < s1 && j < s2) {
        if (aL[i] <= aR[j]) {
            arr[k] = aL[i];
            i++;
        } else {
            arr[k] = aR[j];
            j++;
        }
        k++;
    }

    while (i < s1) {
        arr[k] = aL[i];
        i++;
        k++;
    }

    while (j < s2) {
        arr[k] = aR[j];
        j++;
        k++;
    }
}

function sort(arr, l, r) {
    if (l < r) {
        let m = l + Math.floor((r - l) / 2);
        sort(arr, l, m);
        sort(arr, m + 1, r);
        mergeSort(arr, l, m, r);
    }
}
let arr = [64, 34, 25, 12, 22, 11, 90];
console.log("Unsorted array:");
for (let i = 0; i < arr.length; i++) {
    process.stdout.write(arr[i] + " ");
}
console.log();
sort(arr, 0, arr.length - 1);
console.log("Sorted array:");
for (let i = 0; i < arr.length; i++) {
    process.stdout.write(arr[i] + " ");
}
console.log();