#include<iostream>
using namespace std;

int main()
{
    int arr[10],size = 4;
    cout<<"Enter array elements "<<endl;
    for (int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }
    int k;
    cout<<"Enter the index you want to delete"<<endl;
    cin>>k;
    for(int i = k-1 ;i < size;i++){
        arr[i] = arr[i+1];
    }
    size--;

    cout<<"Printing the array elements "<<endl;
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    


    return 0;
}