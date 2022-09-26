#include <iostream>
using namespace std;

bool isBadVersion(int version);


int firstBadVersion(int n)
{
    // for understanding the concept you must know binary search algo
    long long low,high,mid,ans;
    low = 0;
    high = n;
    while (low<=high)
    {
        mid = (low+high) / 2;
        int isBad = isBadVersion(mid);
        if(isBad){
            ans = mid; // if bed version found we will store it to ans
            high = mid -1; // then we will search if another bad version exiest in frist slice of array
        }
        if(!isBad){
            low = mid + 1;
        }
        else{
            high = mid -1;
        }
    }
    return ans;
}

int main()
{

    return 0;
}