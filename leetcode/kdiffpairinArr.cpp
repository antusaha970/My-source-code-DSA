#include <iostream>
#include <vector>
#include <map>
using namespace std;

int findPairs(vector<int> &nums, int k)
{
    map<int, int> m;
    for (auto i : nums)
    {
        m[i]++;
    };
    int ans = 0;
    for (int i = 0; i < nums.size() - 1; i++)
    {
        for (int j = i; j < nums.size(); j++)
        {
            if (abs(nums[i] - nums[j]) == k && nums[i] != nums[j])
            {
                if (m[i] >= 1 && m[j] >= 1)
                {
                    ans++;
                    m[i] = 0;
                    m[j] = 0;
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