#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int minimum(vector<int> arr)
{
    int minEle = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] != 0)
        {
            minEle = min(INT_MAX, arr[i]);
        }
    }
    return minEle;
}

int minimumOperations(vector<int> &nums)
{
    int ans = 0;
    int min;
    while (true)
    {
        // we will find the minimum element if min = 0 then no more operation can be held
        min = minimum(nums);
        if (min == 0)
        {
            break;
        }
        else // we will count number of operation here
        {
            ans++;
        }
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] != 0) // subtraction
            {
                nums[i] -= min;
            }
        }
    }
    return ans;
}

int main()
{

    return 0;
}