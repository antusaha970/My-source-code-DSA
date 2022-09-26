#include <iostream>
#include <vector>
using namespace std;

vector<int> runningSum(vector<int> &nums)
{
    /*
        Frist we will push frist element of array .
        Then we will carry the sum and push it one by one .
        By the loop structure we need to push the sum one more time after loop finised .
        !! DRY run this code for better understanding !!
    */
    int sum = nums[0];
    vector<int> ans;
    for (int i = 0; i < nums.size() - 1; i++)
    {
        ans.push_back(sum);
        sum += nums[i + 1];
    }
    ans.push_back(sum);
    return ans;
}

int main()
{

    return 0;
}