#include<iostream>
using namespace std;


bool lnSearch(int arr[],int size,int key){
    // Base case
    if(size==0)
        return false;
    //Procesing 
    if(arr[0]==key)
        return true;
    return lnSearch(arr+1,size-1,key);




}

int main()
{
    int arr[5] = {1,2,3,4,5};
    cout<<lnSearch(arr,5,40);
    return 0;
}