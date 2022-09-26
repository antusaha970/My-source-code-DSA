#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> smallerNumbersThanCurrent(vector<int> &nums)
{
    vector<int> ans;
    vector<int> tmp;
    tmp = nums;
    sort(tmp.begin(), tmp.end());
    for (int i = 0; i < nums.size(); i++)
    {
        int count = 0;

        for (int j = 0; j < tmp.size(); j++)
        {
            if (nums[i] > tmp[j])
            {
                count++;
            }
            else if (nums[i] <= tmp[j])
            {
                break;
            }
        }
        ans.push_back(count);
    }
    tmp.clear();
    return ans;
}

int main()
{

    return 0;
}