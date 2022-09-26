#include <iostream>
#include <vector>
#include <map>
using namespace std;

vector<int> singleNumber(vector<int> &nums)
{
    map<int, int> m;
    for (auto i : nums)
    {
        m[i]++;
    }
    vector<int> ans;
    for (int i = 0; i < nums.size(); i++)
    {
        if (m[nums[i]] == 1)
        {
            ans.push_back(nums[i]);
        }
    }
    return ans;
}

int main()
{

    return 0;
}