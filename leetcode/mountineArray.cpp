#include <iostream>
#include <vector>
using namespace std;

int peakIndexInMountainArray(vector<int> &arr)
{
    int low, high, mid;
    low = 0;
    high = arr.size() - 1;
    while (low < high) // if low is less then high 
    {
        mid = (low + high) / 2;
        if (arr[mid] < arr[mid + 1])
        {
            low = mid + 1; // low will be in a postiton that it will be the peek index 
        }
        else
        {
            high = mid; // we will not decress mid -1 beacuse mid can be peek 
        }
    }
    return low;
}

int main()
{

    return 0;
}