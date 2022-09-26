#include<iostream>
using namespace std;

void printArr(int *arr,int size){
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}


// void insertionSort(int *arr,int size){
//     int key , j;
//     for (int i = 1; i <= size-1; i++) // for passes
//     {
//         cout<<"pass no: "<<i<<endl;
//         key = arr[i];
//         j = i-1;
//         while (j>=0 && key < arr[j]) 
//         {
//             arr[j+1] = arr[j];
//             j--;
//         }
//         arr[j+1] = key;
//     }
    
// }

void insertionSort(int *arr,int size){
    int key,j;
    for (int i = 1; i <= size-1; i++) // for passes
    {
        key = arr[i]; // element
        j = i-1; // index
        while (j>=0 && key<arr[j])
        {
            arr[j+1] = arr[j]; // set value with index
            j--;
        }
        arr[j+1] = key; // when j = -1
    }
    
}

int main()
{
     int arr[] = {45,64,2,7,4,8,92,1,23,3,3,4};
     printArr(arr,12);
     insertionSort(arr,12);
     printArr(arr,12);
    return 0;
}