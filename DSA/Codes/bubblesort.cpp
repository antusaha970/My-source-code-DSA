#include <iostream>
using namespace std;

void printArr(int *arr, int size)
{
    cout << "Printing array " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void bubbleSort(int *arr, int size)
{
    for (int i = 0; i < size - 1; i++) // for passes
    {
        cout << "pass no " << i + 1 << endl;
        for (int j = 0; j < size - 1 - i; j++) // for comparison
        {
            if (arr[j] > arr[j + 1])
            {
                int tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
            }
        }
    }
}

/*
C++ is a very efficient language. It is mother of almost every language. 
*/

void bubbleSortAdaptive(int *arr, int size)
{
    int isSorted;
    for (int i = 0; i < size - 1; i++) // for passes
    {
        isSorted = true;
        // cout << "pass no " << i + 1 << endl; for visualzing passes

        for (int j = 0; j < size - 1 - i; j++) // for comparison 
        {
            if (arr[j] > arr[j + 1])
            {
                int tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
                isSorted = false;
            }
        }
        if (isSorted) // if sorted
        {
            return;
        }
    }
}

int main()
{
    int arr[] = {5, 1, 89, 23};
    int arr2[] = {5, 4, 3, 2};
    int arr3[] = {5, 4, 3, 2, 67, 8, 9, 0, 2, 3, 34};
    int arr4[] = {5, 4, 3, 2, 67, 8, 9, 0, 2, 3, 34};
    // printArr(arr2, 4);
    // bubbleSort(arr2,4);
    // printArr(arr2, 4);
    // printArr(arr, 4);
    // bubbleSort(arr,4);
    // printArr(arr, 4);
    bubbleSort(arr, 4);
    printArr(arr, 4);
    // bubbleSortAdavtive(arr,4);

    printArr(arr, 4);

    return 0;
}