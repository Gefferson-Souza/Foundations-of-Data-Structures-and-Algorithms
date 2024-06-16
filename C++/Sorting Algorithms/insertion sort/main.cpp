#include <vector>
#include <iostream>

using namespace std;

void insertionSort(vector<int> &array)
{
    for (int i = 1; i < array.size(); ++i)
    {
        int temp = array[i];
        int j = i - 1;

        while (j >= 0 && array[j] > temp)
        {
            array[j + 1] = array[j];
            j--;
        }

        array[j + 1] = temp;
    }
}

void printArray(vector<int> array)
{
    for (int i = 0; i < array.size(); ++i)
    {
        cout << array[i] << " ";
    }
    cout << endl;
}

int main()
{
    vector<int> numberArray = {1, 10, 4, 3, 7, 12, 56, 83, 2, 4};
    printArray(numberArray);
    insertionSort(numberArray);
    printArray(numberArray);
    return 0;
}