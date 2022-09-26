#include <iostream>
#include <vector>
#include <string>
using namespace std;

int findNumbers(vector<int> &nums)
{
    int ans = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        string tmp = to_string(nums[i]);
        if ((tmp.size()) % 2 == 0)
            ans++;
    }
    return ans;
}

int main()
{
    vector<int> v;
    v.push_back(1);
    int i = v[0];
    string j = to_string(i);
    cout << j << endl;
    cout << j.size() << endl;

    return 0;
}