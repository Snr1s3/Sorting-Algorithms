using System;
class BubbleSort
{
    static void selectionSort(int[] arr, int n)
    {
        for(int i = 0; i<n - 1;i++){
            int min = i;
            for(int j = i + 1; j< n;j++){
                if (arr[j] < arr[min]) {
                    min = j;
                }
            }
            int temp = arr[min];
            arr[min] = arr[i];
            arr[i] = temp;
        }
    }
    static void Main(string[] args)
    {
        int[] arr = {64, 34, 25, 12, 22, 11, 90};
        Console.WriteLine("Unsorted array:");
        for (int i = 0; i <arr.Length; i++)
            Console.Write(arr[i] + " ");
        Console.WriteLine();
        selectionSort(arr, arr.Length);
        Console.WriteLine("Sorted array:");
        for (int i = 0; i <arr.Length; i++)
            Console.Write(arr[i] + " ");
        Console.WriteLine();
    }
}