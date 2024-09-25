using System;
class BubbleSort
{
    static void mergeSort(int[] arr, int l , int m, int r){
        int s1 = m - l + 1;
        int s2 = r - m;
        int[] aL = new int[s1];
        int[] aR = new int[s2];
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
    }
    static void sort(int[] arr, int l, int r)
    {
        if (l < r) {
            int m = l + (r - l) / 2;
            sort(arr, l, m);
            sort(arr, m + 1, r);
            mergeSort(arr, l, m, r);
        }
    }
    static void Main(string[] args)
    {
        int[] arr = {64, 34, 25, 12, 22, 11, 90};
        Console.WriteLine("Unsorted array:");
        for (int i = 0; i <arr.Length - 1; i++)
            Console.Write(arr[i] + " ");
        Console.WriteLine();
        sort(arr, 0, arr.Length - 1);
        Console.WriteLine("Sorted array:");
        for (int i = 0; i <arr.Length - 1; i++)
            Console.Write(arr[i] + " ");
        Console.WriteLine();
    }
}