using System;
class BubbleSort
{
    static void bubbleSort(int[] arr, int n){
        int tmp;
        bool swap = false;
        for(int j = 0; j < n - 1; j++){
            if(arr[j] > arr[j + 1]){
                tmp  = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
                swap = true;
            }
        }
        if (!swap)
            return;
        else
            bubbleSort(arr, n - 1);
    }

    static void Main(string[] args)
    {
        int[] arr = {64, 34, 25, 12, 22, 11, 90};
        Console.WriteLine("Unsorted array:");
        for (int i = 0; i <arr.Length - 1; i++)
            Console.Write(arr[i] + " ");
        Console.WriteLine();
        bubbleSort(arr, arr.Length);
        Console.WriteLine("Sorted array:");
        for (int i = 0; i <arr.Length - 1; i++)
            Console.Write(arr[i] + " ");
        Console.WriteLine();
    }
}