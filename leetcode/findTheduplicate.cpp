#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int findDuplicate(vector<int> &nums)
{
    sort(nums.begin(),nums.end());
    int size = nums.size();
    // if (size%2==0)
    // {
    //     size = size/2;
    // }
    // else{
    //     size = (size/2)+1;
    // }
    int size = (nums.size()/2);
    return nums[size];
    
}

int main()
{

    return 0;
}