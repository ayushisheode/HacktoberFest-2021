import java.util.Arrays;

public class InsertionSort {
    public static void main(String[] args) {
        int[] dataSet = { 6, 3, 8, 7, 2, 4, 1, 5 };
        insertionSort(dataSet);

        System.out.println("Sorted Array: ");
        System.out.println(Arrays.toString(dataSet));
    }

    static void insertionSort(int[] array){
        int size = array.length;

        for(int i = 1; i < size; i++){
            int temp = array[i];
            int j = i - 1 ;

            while( j >= 0 && temp < array[j] ){
                array[j+1] = array[j];
                j--;
            }
            array[j+1] = temp;
        }
    }

}
