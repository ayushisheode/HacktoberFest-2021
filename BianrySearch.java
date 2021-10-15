public class BinarySearch {

    public static void main(String[] args){
        int[] dataSet = { 1, 2, 3, 5, 13, 15, 18, 29, 31, 36, 40, 47, 51, 59, 72 };

        int UP = dataSet.length;
        int LOW = 0;

        int x = 31;

        int result = binarySearch(dataSet, LOW, UP - 1, x);
        if (result == -1)
            System.out.println("Element not found");
        else
            System.out.printf("Element found at index : %d", result);
    }

    static int binarySearch(int array[], int low, int up, int x){
        if (up >= low) {
            int mid = (low + up) / 2;

            if (x == array[mid])
                return mid;
            else if (x < array[mid])
                return binarySearch(array, low, mid - 1, x);
            else{
                return binarySearch(array, mid + 1, up, x);
            }
        }
        return -1;
    }

}
