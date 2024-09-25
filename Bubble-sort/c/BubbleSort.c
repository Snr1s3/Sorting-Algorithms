#include <stdio.h>
void bubbleSort(int arr[], int n) 
{
    int tmp;
    int swap = 0;
    for(int i = 0; i < n - 1; i++)
    {
        if(arr[i] > arr[i + 1])
        {
            tmp = arr[i];
            arr[i] = arr[i + 1];
            arr[i + 1] = tmp;
            swap = 1;
        }
    }
    if (!swap)
        return;
    else
        bubbleSort(arr, n - 1);
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
    bubbleSort(arr, length);
    printf("Sorted array:\n");
    for (int i = 0; i < length - 1; i++) 
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}