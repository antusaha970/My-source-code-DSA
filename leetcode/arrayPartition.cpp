#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int arrayPairSum(vector<int> &nums)
{
    // frist we will sort the nums
    sort(nums.begin(), nums.end());
    // for the sum of minimun numbers
    int sum = 0;
    int i, j, size, minimum;
    i = 0;
    j = 1;
    size = nums.size();
    while (j < size)
    {
        // hare we will get the minimun nums
        minimum = min(nums[i], nums[j]);
        sum += minimum;
        // we will incrise i and j such that it make next pair
        i += 2;
        j += 2;
    }
    return sum;
}

int main()
{

    return 0;
}