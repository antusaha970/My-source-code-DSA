#include<iostream>
using namespace std;

int linearSearch(int arr[],int size,int key){
    for (int i = 0; i < size; i++)
    {
        if (arr[i]==key)
        {
            return i;
        }
        
    }
    return -1;
}

int binarySearch(int arr[],int size,int key){
    int start = 0;
    int end = size;
    while (start<=end)
    {
        int mid = (start+end)/2;
        if (arr[mid]==key)
        {
            return mid;
        }
        else if (arr[mid]<key)
        {
            start = mid +1;
        }
        else{
            end = mid -1;
        }
    }
    return -1;
}


int main(){
    int arr[] ={1,2,3,4,5,5,6,6};
    int size = 8;
    // cout<<linearSearch(arr,size,5);
    cout<<binarySearch(arr,size,6);
    return 0;
}