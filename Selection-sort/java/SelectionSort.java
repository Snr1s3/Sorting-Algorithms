public class SelectionSort {
    public static void selectionSort(int[] arr, int n){
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
    public static void main (String[] args){
        int[] arr = {64, 34, 25, 12, 22, 11, 9};
        System.out.println("Unsorted array:");
        for (int i = 0; i <arr.length; i++)
            System.out.print(arr[i] + " ");
        System.out.println();
        selectionSort(arr, arr.length);
        System.out.println("Sorted array:");
        for (int i = 0; i <arr.length; i++)
            System.out.print(arr[i] + " ");
        System.out.println();
    }
}
