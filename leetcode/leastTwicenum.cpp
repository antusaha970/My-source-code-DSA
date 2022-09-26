#include <iostream>
#include <vector>
using namespace std;

int dominantIndex(vector<int> &nums)
{
    // frist we will find max index then we will go through the conditions 
    int max = 0,maxInd = nums[0];
    for (int i = 0; i < nums.size() - 1; i++)
    {
        if(nums[i]>maxInd){
            maxInd = nums[i];
            max = i;
        }
    }

    for (int i = 0; i < nums.size(); i++)
    {
        if ((nums[i] * 2) > nums[max] && nums[i]!=nums[max]) // conditions for this problem
            return -1;
    }
    return max;
}

int main()
{

    return 0;
}