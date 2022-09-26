#include <iostream>
#include <vector>
using namespace std;

long long countBadPairs(vector<int> &nums)
{
    long long ans = 0;
    int i, j;
    i = 0;
    j = i + 1;
    while (j < nums.size())
    {
        if ((j - i) != nums[j] - nums[i])
        {
            ans++;
        }
        i++;
        j = i + 1;
    }

    return ans;
}

int main()
{

    return 0;
}