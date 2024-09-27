#include <stdio.h>

void selectionSort(int arr[], int n)
{
    int temp;
    for(int i = 0; i < n-1; i++)
    {
        int min = i;
        for(int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min]) 
            {
                min = j;
            }
        }
        int temp = arr[min];
        arr[min] = arr[i];
        arr[i] = temp;
    }

}

int main() 
{
    int arr[] = {74, 34, 25, 12, 22, 11, 90};
    int length = sizeof(arr) / sizeof(arr[0]);
    printf("Unsorted array:\n");
    for (int i = 0; i < length; i++) 
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    selectionSort(arr, length);
    printf("Sorted array:\n");
    for (int i = 0; i < length; i++) 
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}