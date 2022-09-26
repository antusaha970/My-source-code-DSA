#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> targetIndices(vector<int> &nums, int target)
{
    vector<int> ans;
    sort(nums.begin(), nums.end());
    int start = 0;
    int end = nums.size() - 1;
    while (start <= end)
    {
        int mid = (start + end) / 2;
        if (nums[mid] == target)
        {
            ans.push_back(mid);
        }
        else if (nums[mid] < target)
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

int main()
{
    vector<int> a = {1,2,5,2,3};
    vector<int> b;
    b=targetIndices(a,2);
    for (int i = 0; i < b.size(); i++)
    {
        cout<<b[i]<<endl;
    }
    
    return 0;
}