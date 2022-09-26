#include <iostream>
#include <vector>
using namespace std;
vector<int> shuffle(vector<int> &nums, int n)
{
    vector<int> ans;
    int i,j;
    i = 0;
    j = n;
    while (j<nums.size())
    {
        ans.push_back(nums[i]);
        ans.push_back(nums[j]);
        i++;
        j++;
    }
    
    return ans;
}
int main()
{

    return 0;
}