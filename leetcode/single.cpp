#include <iostream>
#include <vector>
#include <map>
using namespace std;

int singleNumber(vector<int> &nums)
{
    map<int, int> m;
    for (auto i : nums)
    {
        m[i]++;
    }

        int ans = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        if (m[nums[i]] == 1)
        {
            ans = nums[i];
            break;
        }
    }
    return ans;
}

int main()
{

    return 0;
}