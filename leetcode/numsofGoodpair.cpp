#include <iostream>
#include <map>
#include <vector>
using namespace std;

int numIdenticalPairs(vector<int> &nums)
{
    /*
        Frist we will count all the element how many times at occurres in array .
        Then we will use the formula (n * (n - 1)) / 2. N is how many time a element is in the array.
    */
    map<int, int> m;
    for (int i = 0; i < nums.size(); i++)
    {
        m[nums[i]]++;
    }
    int ans = 0;
    // By using this mathood we will need less time
    for (auto i : m)
    {
        int n = i.second;
        int tmp = 0;
        tmp = (n * (n - 1)) / 2;
        ans += tmp;
    }
    return ans;
}

int main()
{
    map<int, int> m;
    vector<int> nums = {1, 1, 1, 2, 2, 3, 10};
    for (int i = 0; i < nums.size(); i++)
    {
        m[nums[i]]++;
    }
    for (auto i : m)
    {
        cout << i.second << " ";
    }

    return 0;
}