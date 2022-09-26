#include <iostream>
#include<vector>
using namespace std;

int sumOddLengthSubarrays(vector<int> &arr)
{
    int ans = 0 ;
    for (int i = 0; i < arr.size(); i++)
    {
        ans += arr[i];
    }
    for (int i = 1; i <= arr.size(); i++)
    {
        for (int j = 2; j <= arr.size()-1; j++)
        {
            if(j%2!=0){
                for (int k = i; k < j; k++)
                {
                    ans += arr[k];
                }
                
            }
        }
    }
    return ans;
    
}

int main()
{

    return 0;
}