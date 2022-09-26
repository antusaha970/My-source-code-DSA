#include <iostream>
#include <vector>
using namespace std;

int singleNumber(vector<int> &nums)
{
    int ans = 0;
    for (auto i : nums)
    {
        ans ^= i;
    }
    return ans;
}

int main()
{ 
    int j = 6^2;
    cout<<j;
    return 0;
}