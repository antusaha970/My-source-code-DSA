#include<iostream>
using namespace std;

int main()
{
    int arr[5],ele,pos,len,i;
    cout<<"Enter the length of the array: "<<endl;
    cin>>len;
    cout<<"Enter array elements: "<<endl;
    for(int i = 0;i<len;i++){
        cin>>arr[i];
    }
    cout<<"Enter the element you want to insert: "<<endl;
    cin>>ele;
    cout<<"Enter the position you want to insert: "<<endl;
    cin>>pos;

    for(i = len;i>= pos;i--){
        arr[i] = arr[i-1];
    }

    arr[i] = ele;
    len++;

    cout<<"Printing the final array"<<endl;
    for(int i =0;i<len;i++){
        cout<<arr[i]<<" ";
    }





    return 0;
}