#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int countElements(vector<int> &nums)
{
    /*
    if a number less then the max element and bigger then the minimun element then it satisify  the condition
    after sorting frist element will be minimun and last element will be maximum
    */
    sort(nums.begin(), nums.end());
    int count = 0;
    int min = nums[0];
    int max = nums[nums.size() - 1];
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] > min && nums[i] < nums[max])
            count++;
    }

    return count;
}

int main()
{

    return 0;
}