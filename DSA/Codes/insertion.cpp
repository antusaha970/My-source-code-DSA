#include <iostream>
using namespace std;

int display(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void insertion(int arr[], int index, int key, int &n, int capacity)
{
    if (index >= capacity)
    {
        cout << "Not possiable";
    }
    for (int i = n; i >= index; i--)
    {
        /* code */
        arr[i + 1] = arr[i];
    }
    arr[index] = key;
    n++;
}

void deletion(int arr[],int index,int &n){
    for (int i = index; i <n ; i++)
    {
        arr[i]= arr[i+1];
    }
    n--;
}

int main()
{
    int arr[100] = {1, 2, 3, 4, 5, 6};
    int usedSize = 6;
    display(arr, usedSize);
    insertion(arr, 4, 5, usedSize, 100);
    deletion(arr,2,usedSize);
    display(arr, usedSize);
    return 0;
}