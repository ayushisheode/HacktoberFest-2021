import java.util.Arrays;

public class BubbleSort {
    public static void main(String []args) {
        int[] dataSet = { 54, 26, 95, 11, 48 };
        bubbleSort(dataSet);

        System.out.println("Sorted Array : ");
        System.out.println(Arrays.toString(dataSet));
    }

    static void bubbleSort(int array[]){
        int size = array.length;

        for (int i = 0; i < size - 1 ; i++) {
            for (int j = 0; j < size - 1 - i; j++) {
                if (array[j+1] < array[j])
                {
                    int temp = array[j];
                    array[j] = array[j+1];
                    array[j+1] = temp;
                }
            }
        }
    }

}
