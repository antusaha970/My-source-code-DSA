#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int thirdMax(vector<int> &nums)
{
    int ans, count = 0;
    if (nums.size() == 2)
    {
        return max(nums[0], nums[1]);
    }
    if (nums.size() == 1)
    {
        return nums[0];
    }
    for (int i = 0; i < nums.size() - 1; i++)
    {
        if (nums[i] > nums[i + 1])
        {
            ans = nums[i + 1];
            count++;
            if (count == 3)
            {
                break;
            }
        }
    }
    return ans;
}

int main()
{

    return 0;
}