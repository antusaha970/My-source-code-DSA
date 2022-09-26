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

void margeProcedur(int *arr, int low, int mid, int high)
{
    // we will marge two array together here
    int i, j, k, B[100];
    i = k = low;
    j = mid + 1;

    while (i <= mid && j <= high)
    {
        if (arr[i] < arr[j])
        {
            B[k] = arr[i];
            i++;
            k++;
        }
        else
        {
            B[k] = arr[j];
            k++;
            j++;
        }
    }
    while (i <= mid)
    {
        B[k] = arr[i];
        i++;
        k++;
    }
    while (j <= high)
    {
        B[k] = arr[j];
        k++;
        j++;
    }
    for (int i = 0; i <= high; i++)
    {
        arr[i] = B[i];
    }
}

void margeSort(int *arr, int low, int high)
{
    int mid;
    if (low < high)
    {
        mid = (low + high) / 2;             // hare we will calculate mid element
        margeSort(arr, low, mid);           // for left
        margeSort(arr, mid + 1, high);      // for right
        margeProcedur(arr, low, mid, high); // for marge
    }
}

int main()
{
    int arr[] = {100,200,3,4,6,77};
    printArr(arr, 6);
    margeSort(arr, 0, 5);
    printArr(arr, 6);
    return 0;
}