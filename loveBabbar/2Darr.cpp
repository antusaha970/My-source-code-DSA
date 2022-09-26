#include<iostream>
#include<vector>
using namespace std;

void sumRowWise(int arr[][3],int n,int m){
    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = 0; j < m; j++)
        {
            sum += arr[i][j];
        }
        cout<<sum<<" ";
        
    }
    
}

void binarySearch(int arr[][3],int target){

    int row = 3;
    int col = 3;

    int start = 0;
    int end = (row*col) -1;
    int mid,element ;
    while (start<=end)
    {
        mid = (start+end) /2;

        element = arr[mid/col][mid%col];

        if(element==target){
            cout<<"Element exiest ";
            return;
        }
        if(element < target){
            start = mid+1;
        }
        else{
            end = mid-1;
        }
    }
    
    cout<<"Element not found ";
    return;
}

int main()
{
    // cout<<"Enter array element "<<endl;
    // int arr[3][3];
    // for (int row = 0; row < 3; row++)
    // {
    //     for (int col = 0; col < 3; col++)
    //     {
    //         cin >> arr[row][col];
    //     }
    // }
    // // for (int row = 0; row < 3; row++)
    // // {
    // //     for (int col = 0; col < 3; col++)
    // //     {
    // //         cout << arr[col][row]<<" ";
    // //     }
    // //     cout<<endl;
    // // }
    // // cout<<endl;
    // for (int row = 0; row < 3; row++)
    // {
    //     for (int col = 0; col < 3; col++)
    //     {
    //         cout << arr[row][col]<<" ";
    //     }
    //     cout<<endl;
    // }
    // cout<<endl;
    // binarySearch(arr,10);
    // int tmp = 98&1;
    // // cout<<tmp<<endl;
    // int i = 15%2==0 ? 0: 10;
    // cout<<i;
    // vector<int> a(10,0);
    // for(int i:a){
    //     cout<<i<<" ";
    // }
    for(int i =2*2;i<26;i+=2){
        cout<<i<<" ";
    }

    return 0;
}