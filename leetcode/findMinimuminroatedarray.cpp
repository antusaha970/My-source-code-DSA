#include <iostream>
#include <vector>
using namespace std;

/*
    1: Frist We will find that index whare rotation is started
        for that we will run a binary search
    2: By the Constraints minimum element can be that index whare rotation started from or nums[0]
        after comparing we will return the ans
*/
int getPivot(vector<int> nums)
{
    int start, end, mid;
    start = 0;
    end = nums.size() - 1;
    while (start < end)
    {
        mid = (start + end) / 2;
        if (nums[mid] >= nums[0])
        {
            start = mid + 1;
        }
        else
        {
            end = mid;
        }
    }
    return start;
}

int findMin(vector<int> &nums)
{
    int pivotInd;
    pivotInd = getPivot(nums);
    if (nums[pivotInd] < nums[0])
    {
        return nums[pivotInd];
    }
    return nums[0];
}

int main()
{

    return 0;
}