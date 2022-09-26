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

int patition(int *arr, int low, int high)
{
    int pivot = arr[low];
    int i = low + 1;
    int j = high;
    int tmp;
    do
    {
        while (arr[i] <= pivot) // searching for bigger then pivot 
        {
            i++;
        }
        while (arr[j] > pivot) // searching for less then pivot 
        {
            j--;
        }
        if(i<j){
            tmp = arr[i];
            arr[i] = arr[j];
            arr[j] = tmp;
        }
    } while (i < j);

    // final swaping 
    tmp = arr[j];
    arr[j] = pivot;
    arr[low] = tmp;
    // returning the partion index
    return j;
}

void quickSort(int *arr, int low, int high)
{
    int partitionIndex;
    if (low < high)
    {
        printArr(arr,6);
        partitionIndex = patition(arr, low, high); // here we will get our partition index for sub array
        quickSort(arr, low, partitionIndex - 1);   // left sub array
        quickSort(arr, partitionIndex + 1, high);  // right sub array
    }
}

int main()
{
    int arr[] = {40, 10, 2, 4, 5, 30};
    printArr(arr, 6);
    quickSort(arr,0,5);
    printArr(arr, 6);
    return 0;
}