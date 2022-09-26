#include <iostream>
#include <vector>
using namespace std;

vector<int> sortArrayByParityII(vector<int> &nums)
{
    vector<int> ans(nums.size());
    int evenInd = 0;
    int oddInd = 1;
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] % 2 == 0) // is even number
        {
            ans[evenInd] = nums[i];
            evenInd += 2;
        }
        else if (nums[i] % 2 != 0) // is odd number
        {
            ans[oddInd] = nums[i];
            oddInd += 2;
        }
    }
    return ans;
}

int main()
{

    return 0;
}