#include <stdio.h>
#include <stdlib.h>
void mergeSort(int arr[], int l , int m, int r)
{
    int s1 = m - l + 1;
    int s2 = r - m;
    int *aL = (int *)malloc(s1 * sizeof(int));
    int *aR = (int *)malloc(s2 * sizeof(int));
    int i = 0;
    int j = 0;
    int k = l;

    for (i = 0; i < s1; ++i)
        aL[i] = arr[l + i];
    for (j = 0; j < s2; ++j)
        aR[j] = arr[m + 1 + j];

    i = 0;
    j = 0;
    
    while (i < s1 && j < s2) {
        if (aL[i] <= aR[j]) {
            arr[k] = aL[i];
            i++;
        }
        else {
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
    free(aL);
    free(aR);
}
void sort(int arr[], int l, int r)
{
    if (l < r)
    {
        int m = l + (r - l) / 2;
        sort(arr, l, m);
        sort(arr, m + 1, r);
        mergeSort(arr, l, m, r);
    }
}
int main() 
{
    int arr[] = {74, 34, 25, 12, 22, 11, 90};
    int length = sizeof(arr) / sizeof(arr[0]);
    printf("Unsorted array:\n");
    for (int i = 0; i < length - 1; i++) 
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    sort(arr, 0, length);
    printf("Sorted array:\n");
    for (int i = 0; i < length - 1; i++) 
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}