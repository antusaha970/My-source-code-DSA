#include <iostream>
#include <vector>
using namespace std;

vector<int> getConcatenation(vector<int> &nums)
{
    vector<int> ans;
    for (int i = 0; i < nums.size(); i++)
    {
        ans.push_back(nums[i]);
    }
    for (int i = 0; i < nums.size(); i++)
    {
        ans.push_back(nums[i]);
    }
    return ans;
}

int main()
{
    vector<int> a = {1, 2, 3};
    vector<int> b = getConcatenation(a);

    for (int i = 0; i < b.size(); i++)
    {
        cout<<b[i]<<" ";
    }
    cout<<12%2<<endl;
    return 0;
}