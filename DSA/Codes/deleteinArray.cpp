#include<iostream>
using namespace std;

int main()
{
    int delInd,N = 5;
    int arr[5] = {1,2,3,4,5};
    cout<<"Enter the index you want to delete"<<endl;
    cin>>delInd;

    for(int i = delInd-1; i < N-1; i++){

        arr[i] = arr[i+1];
        
    }
    N--;
    cout<<"Print the array"<<endl;
    for(int i = 0;i < N;i++ ){
        cout<<arr[i]<<" ";
    }


    return 0;
}
