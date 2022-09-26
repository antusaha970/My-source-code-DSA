#include <iostream>
#include <vector>
#include <map>
using namespace std;

int sumOfUnique(vector<int> &nums)
{
    map<int, int> m;
    for (auto i : nums)
    {
        m[i]++;
    }
    int sum = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        if (m[nums[i]] == 1)
        {
            sum += nums[i];
        }
    }
    return sum;
}

int main()
{

    return 0;
}