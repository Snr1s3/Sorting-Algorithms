public class BubbleSort{

    public static void bubbleSort(int[] arr, int n){
        int tmp;
        boolean swap = false;
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
    public static void main (String[] args){
        int[] arr = {64, 34, 25, 12, 22, 11, 90};
        System.out.println("Unsorted array:");
        for (int i = 0; i <arr.length - 1; i++)
            System.out.print(arr[i] + " ");
        System.out.println();
        bubbleSort(arr, arr.length);
        System.out.println("Sorted array:");
        for (int i = 0; i <arr.length - 1; i++)
            System.out.print(arr[i] + " ");
        System.out.println();
    }
}