#include<iostream>
using namespace std;

void display(int arr[],int used){
    for (int i = 0; i < used; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int insertionArr(int arr[],int index,int &used,int totalSize,int key){
    if (used>=totalSize)
    {
        return -1;
    }
    for (int i = used; i >= index ; i--)
    {
        /* code */
        arr[i+1]= arr[i];
    }
    arr[index] = key;
    used++;
    display(arr,used);
    

}



int main(){
    int arr[100] = {1,2,3,4,5,6};
    int used = 6;
    display(arr,used);
    insertionArr(arr,6,used,100,6);
    return 0;
}