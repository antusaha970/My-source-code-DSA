#include<iostream>
using namespace std;

int sumArr(int arr[],int size, int sum =0){
//    int sum(0);
   sum += arr[0];
   if(size == 1 || size==0)
        return sum;
   return sumArr(arr+1,size-1,sum); 

}


int main()
{
    int arr[5] = {1,2,3,4,5};
    cout<<sumArr(arr,5);
    return 0;
}