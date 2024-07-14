
function insertionSort(arr: number[]): void {
    for (let i = 1; i < arr.length; ++i){
        const temp:number = arr[i];
        let j:number = i - 1;

        while (j >= 0 && arr[j] > temp) {
            arr[j + 1] = arr[j];
            j -= 1;
        }

        arr[j + 1] = temp;
    }
}

// Example
const arr = [12, 11, 13, 5, 6];
insertionSort(arr);
console.log(arr); // Output: [5, 6, 11, 12, 13]