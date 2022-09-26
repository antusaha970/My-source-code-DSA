#include<iostream>
using namespace std;

void display(int arr[],int size){
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
}

void deletion(int arr[],int &size,int index){
    for (int i = index; i < size; i++)
    {
        arr[i] =arr[i+1];
    }
    size--;
    
}

int main(){
    int arr[100] = {1,2,3,4,5,6};
    int size = 6;
    display(arr,size);
    cout<<endl;
    deletion(arr,size,4);
    display(arr,size);
    return 0;
}