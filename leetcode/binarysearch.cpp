#include <iostream>
#include <vector>
using namespace std;

int search(vector<int> &nums, int target)
{
   
    
    
    int start = 0;
    // You should always take orginal size of an array
    int end = nums.size()-1;
    while (start <= end)
    {
        int mid = (start + end) / 2;
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

int main()
{

    return 0;
}