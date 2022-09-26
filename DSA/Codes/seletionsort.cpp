#include <iostream>
using namespace std;

void printArr(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void selectionSort(int *arr, int size)
{
    for (int i = 0; i < size - 1; i++) // for passes
    {
        for (int j = i + 1; j < size; j++) // for comparison
        {
            if (arr[i] > arr[j])
            { // for swap
                int tmp = arr[i];
                arr[i] = arr[j];
                arr[j] = tmp;
            }
        }
    }
}

int main()
{
    int arr[] = {4, 1, 0, 2, 89, 2, 4, 12, 63, 7};
    printArr(arr, 10);
    selectionSort(arr, 10);
    printArr(arr, 10);
    return 0;
}