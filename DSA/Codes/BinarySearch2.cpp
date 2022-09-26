#include<iostream>
using namespace std;

int BinarySearch(int arr[],int s,int key){
    int start = 0;
    int end = s;
    while (start<=end)
    {
        int mid = (start+end)/2;
        if (arr[mid]==key)
        {
            /* code */
            return mid;
        }
        else if (arr[mid]>key)
        {
            end = mid-1;
        }
        else{
            start = mid+1;
        }
        
        
    }
    return -1;
    
}

int main()
{
    int arr[] = {1,2,3,4,5,6,7,8};
    int size= 8;

    cout<<BinarySearch(arr,size,9);
    return 0;
}