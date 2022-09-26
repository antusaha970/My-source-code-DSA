#include<iostream>
#include<climits>
using namespace std;



void printArr(int *arr,int size)
{
    cout << "Printing array " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}


// finding maximum element from the array
int maximumElement(int *arr,int size){
    int max = INT_MIN;
    for (int i = 0; i < size; i++)
    {
        if(arr[i]>max){
            max = arr[i];
        }
    }
    return max;
}

void countSort(int *arr,int size){
    int i,j;
    // finding the max element
    int max = maximumElement(arr,size);
    // set the count array to 0
    int *countArr= (int*)calloc(max+1,sizeof(int));
    // count the number of elements in the given array
    for (i = 0; i < size; i++)
    {
        countArr[arr[i]]++;
    }
    i = j = 0;
    // now sorting the array
    while (i<= max)
    {
        if(countArr[i]>0){
            arr[j] = i;
            j++;
            countArr[i]--;
        }
        else{
            i++;
        }
    }

}


int main()
{
    int arr[]= {89,1,12,3,1,41,4,1,0,1};
    printArr(arr,10);
    countSort(arr,10);
    printArr(arr,10);
    return 0;
}