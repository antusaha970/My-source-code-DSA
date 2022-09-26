#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<int> sortedSquares(vector<int> &nums)
{
    int i, j;
    i = 0;
    j = nums.size() - 1;
    // two pointer approach will take less time beacuse two array elements are updating in same time
    while (i <= j)
    {
        if (i == j)
        {
            nums[i] *= nums[i];
            i++;
        }
        else
        {
            nums[i] *= nums[i];
            i++;
            nums[j] *= nums[j];
            j--;
        }
    }
    sort(nums.begin(), nums.end());
    return nums;
}

int main()
{
    int i = -4;
    cout << i * i;
    return 0;
}