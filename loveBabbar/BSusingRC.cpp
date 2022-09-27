#include<iostream>
#include<vector>
using namespace std;


bool BS(int arr[],int start,int end,int key){

    // base case
    if(start>end)
        return false;
    
    int mid = (start+end) / 2;

    if(arr[mid]==key)
        return true;

    if(arr[mid] < key)

        return BS(arr,mid+1,end,key);
    else
        return BS(arr,start,mid-1,key);
    
}


int main()
{
    // int arr[] ={1,2,3,4,5,6,7,8,9,10};
    // int size = 10;
    // cout<<BS(arr,0,size-1,100);

    return 0;
}