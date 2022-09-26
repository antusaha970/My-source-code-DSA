#include <iostream>
#include <map>
#include <vector>
using namespace std;

vector<vector<int>> findDifference(vector<int> &nums1, vector<int> &nums2)
{
    map<int, int> countN1;
    map<int, int> countN2;
    for (int i = 0; i < nums1.size(); i++)
    {
        countN1[nums1[i]]++;
    }
    for (int i = 0; i < nums2.size(); i++)
    {
        countN2[nums2[i]]++;
    }
    vector<vector<int>> ans;
    vector<int> tmp;
    vector<int> tmp2;
    for (int i = 0; i < nums1.size(); i++)
    {
        if (countN2[nums1[i]] == 0)
        {
            tmp.push_back(nums1[i]);
            countN2[nums1[i]]++;
        }
    }
    ans.push_back(tmp);
    for (int i = 0; i < nums2.size(); i++)
    {
        if (countN1[nums2[i]] == 0)
        {
            tmp2.push_back(nums2[i]);
            countN1[nums2[i]]++;
        }
    }
    ans.push_back(tmp2);
    return ans;
}

int main()
{

    return 0;
}