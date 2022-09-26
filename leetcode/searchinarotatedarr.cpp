#include <iostream>
#include <vector>
using namespace std;

/*
    In this problem we will make the such that we will frist find pivot then if a condition
    satisfy then we will run binary search
    1: Find pivot
    2: Binary search
        if(nums[pivot] <= target && target<=nums[nums.size()-1])
        then we will run binary search pivot to end
    3: Binary Search
        else we will run binary search start pivot to end
*/

int pivotIndex(vector<int> nums)
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

int indexOfright(int pivot, vector<int> nums, int target)
{
    int start, end, mid;
    start = pivot;
    end = nums.size() - 1;
    while (start <= end)
    {
        mid = (start + end) / 2;
        if (nums[mid] == target)
        {
            return mid;
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
    return -1;
}

int indexOfleft(int pivot, vector<int> nums, int target)
{
    int start, end, mid;
    start = 0;
    end = pivot;
    while (start <= end)
    {
        mid = (start + end) / 2;
        if (nums[mid] == target)
        {
            return mid;
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
    return -1;
}

int search(vector<int> &nums, int target)
{
    int pivot, rightSearch, leftSearch;
    pivot = pivotIndex(nums);
    if (nums[pivot] <= target && target <= nums[nums.size() - 1])
    {
        rightSearch = indexOfright(pivot, nums, target);
        return rightSearch;
    }
    else
    {
        leftSearch = indexOfleft(pivot, nums, target);
        return leftSearch;
    }
    return -1;
}

int main()
{

    return 0;
}