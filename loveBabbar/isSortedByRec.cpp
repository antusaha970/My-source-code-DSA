#include<iostream>
using namespace std;

void printArr(int arr[],int n){
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}

bool isSorted(int arr[],int size){
    // Base Case
    if(size ==0 || size==1)
        return true;
    // procession
    if(arr[0] > arr[1])
        return false;
    return isSorted(arr+1,size-1);
}


int main()
{
    int arr[5] = {1,2,3,4,5};
    cout<<isSorted(arr,5);
    return 0;
}