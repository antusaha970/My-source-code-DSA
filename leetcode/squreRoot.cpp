#include <iostream>
using namespace std;

long long int binarySearch(int x){
    int start = 0;
    int end = x;
    long long int mid,ans;
    while (start<=end)
    {
        mid = (start+end) / 2;
        if(mid*mid==x){
            return mid;
        }
        if((mid*mid)>x){
            end = mid -1;
        }
        else{
            start = mid+1;
            ans = mid;
        }
    }
    return ans;
}

int mySqrt(int x)
{
     int ans = binarySearch(x);
     return ans; 
}

int main()
{
    cout<<mySqrt(8)<<endl;
    return 0;
}