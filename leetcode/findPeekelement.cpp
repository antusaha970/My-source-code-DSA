#include <iostream>
#include <vector>
using namespace std;

int findPeakElement(vector<int> &nums)
{
    // DRY run this code for a better understanding 
    int low, high, mid;
    low = 0;
    high = nums.size() - 1;
    while (low < high)
    {
        mid = (low + high) / 2;
        if (nums[mid] < nums[mid + 1])
        {
            low = mid + 1;
        }
        else
        {
            high = mid;
        }
    }
    return low;
}

int main()
{

    return 0;
}