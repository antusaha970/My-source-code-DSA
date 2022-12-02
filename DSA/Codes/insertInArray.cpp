#include<iostream>
using namespace std;

int main()
{
    int ele,ind,arr[10],k;
    int size = 5;
    cout<<"Insert array element "<<endl;
    for(int i= 0;i<size;i++){
        cin>>arr[i];
    }
    cout<<"Enter the element you want to insert"<<endl;
    cin>>ele;
    cout<<"Enter the index"<<endl;
    cin>>ind;
    for (k = size; k > ind; k--)
    {
        arr[k] = arr[k+1];
    }
    arr[k] = ele;
    size++;
    cout<<"Print the array"<<endl;
    for(int i = 0;i < size;i++ ){
        cout<<arr[i]<<" ";
    }

    



    return 0;
}