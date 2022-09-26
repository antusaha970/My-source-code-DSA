#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int fristOccurenceInsortedArray(vector<int> nums, int target)
{
    int start, end, mid, ans = -1;
    start = 0;
    end = nums.size() - 1;
    while (start <= end)
    {
        mid = (start + end) / 2;
        if (nums[mid] == target)
        {
            ans = mid;
            end = mid - 1;
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
    return ans;
}

int lastOccuranceInsortedArray(vector<int> nums, int target)
{
    int start, end, mid, ans = -1;
    start = 0;
    end = nums.size() - 1;
    while (start <= end)
    {
        mid = (start + end) / 2;
        if (nums[mid] == target)
        {
            ans = mid;
            start = mid + 1;
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
    return ans;
}

vector<int> targetIndices(vector<int> &nums, int target)
{
    vector<int> ans;
    sort(nums.begin(), nums.end());
    int fristOccerance, lastOccerance;
    fristOccerance = fristOcc(nums, target);
    lastOccerance = lastOcc(nums, target);
    if(fristOccerance==-1 || lastOccerance== -1){
        return ans;
    }
    for (int i = fristOccerance; i <= lastOccerance; i++)
    {
        ans.push_back(i);
    }
    return ans;
}

int main()
{
    return 0;
}