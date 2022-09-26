#include<iostream>
using namespace std;

int BinarySearch(int size,int key,int arr[]){
    int start = 0;
    int end = size;
    while (start<=end)
    {
        /* code */
        int mid = (start+end)/2;
        cout<<mid<<endl;
        if (arr[mid]==key)
        {
            cout<< mid<<endl;
            break;
        }
        else if (arr[mid]>key)
        {
            end = mid-1;
            cout<<end<<"end"<<endl;
        }
        else{
            start = mid+1; 
            cout<<start<<"start"<<endl;

        }
        
        

        
    }
    return -1;
    
}
//                      k
// 1   2    3       4   5   6
// s        m               e
// s        m               e

int main()
{
    int size;
    cin>>size;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }
    int key;
    cin>>key;
    BinarySearch(size,key,arr);
    
    return 0;
}