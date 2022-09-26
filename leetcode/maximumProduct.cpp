#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;

int maximumProduct(vector<int> &nums)
{
    sort(nums.begin(),nums.end());
    int ans = 1,ans2 = 1;

    int i = nums.size() - 1;
    int j = 0;
    while (j < 3)
    {
        ans *= nums[i];
        i--;
        j++;
    };
    j = 0;
    i = 0;
    while (j < 2)
    {
        ans2 *= nums[i];
        i++;
        j++;
    };
    return max(ans,(ans2*nums[nums.size()-1]));
}

int main()
{

    return 0;
}