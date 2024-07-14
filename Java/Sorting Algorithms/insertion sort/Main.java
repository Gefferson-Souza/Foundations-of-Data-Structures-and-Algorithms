public class Main {
    public static void main(String[] args) {

        int[] numberArray = {1, 10, 4, 3, 7, 12, 56, 83, 2, 4};
        printArray(numberArray);
        insertionSort(numberArray);
        printArray(numberArray);
    }

    static void insertionSort(int[] array) {
        for (int i = 1; i < array.length; i++) {
            int temp = array[i];
            int j = i - 1;

            while (j >= 0 && array[j] > temp) {
                array[j + 1] = array[j];
                j--;
            }

            array[j + 1] = temp;
        }
    }

    /**
     * @param array
     */
    static void printArray(int[] array){
        for(int i = 0; i < array.length; i++){
            System.out.print(array[i] + " ");
        }
        System.out.println();
    }
}
