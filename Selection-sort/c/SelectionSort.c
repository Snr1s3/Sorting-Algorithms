#include <stdio.h>

void selectionSort(int arr[], int n)
{
    int min;
    int temp;
    for(int i = 0; i < n-1; j++)
    {
        int min = i;
        for(int j = i + 1; j < n;)
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
    selectionSort(arr, length);
    printf("Sorted array:\n");
    for (int i = 0; i < length - 1; i++) 
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}