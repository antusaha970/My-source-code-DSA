#include <iostream>
#include <vector>
using namespace std;

int fristOcc(vector<int> nums, int target)
{
    int low, high, mid, ans;
    ans = -1;
    low = 0;
    high = nums.size() - 1;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (nums[mid] == target)
        {
            ans = mid;      // if index found we will update ans
            high = mid - 1; // this time we are searching for frist index so we will again search for the index in frist slice of array
        }
        if (nums[mid] < target)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    return ans;
}

int lastOcc(vector<int> nums, int target)
{
    int low, high, mid, ans;
    ans = -1;
    low = 0;
    high = nums.size() - 1;
    while (low <= high)
    {
        if (nums[mid] == target)
        {

            ans = mid;     // if found we will update the ans
            low = mid + 1; // this time we are searching for last index so we will again search for the index in last slice of array
        }
        if (nums[mid] <= target)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
        mid = low + (high - low) / 2;
    }

    return ans;
}

vector<int> searchRange(vector<int> &nums, int target)
{
    vector<int> ans;
    int fristOccruence, lastOccruence;
    fristOccruence = fristOcc(nums, target); // hare we will find the frist index of target using binary search
    lastOccruence = lastOcc(nums, target);   // hare we will find the last index of target using binary search
    ans.push_back(fristOccruence);
    ans.push_back(lastOccruence);
    return ans;
}

int main()
{
    vector<int> arr = {1, 2, 2};
    vector<int> ans = searchRange(arr, 2);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << ' ';
    }

    return 0;
}