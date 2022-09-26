#include <iostream>
#include <vector>
using namespace std;

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

bool binarySearch(int start, int end, int target, vector<int> nums)
{
    int mid;
    while (start <= end)
    {
        mid = (start + end) / 2;
        if (nums[mid] == target)
        {
            return true;
        }
        if (nums[mid] < target)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return false;
}

bool search(vector<int> &nums, int target)
{
    int pivotInd, rightSearch, leftSeach;
    pivotInd = getPivot(nums);
    if (nums[pivotInd] == target)
    {
        return true;
    }
    if (nums[pivotInd] <= target && target <= nums[0])
    {
        return binarySearch(pivotInd + 1, nums.size() - 1, target, nums);
    }
    return binarySearch(0, pivotInd - 1, target, nums);
}

int main()
{

    return 0;
}