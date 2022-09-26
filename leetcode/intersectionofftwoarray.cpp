#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;

vector<int> intersection(vector<int> &nums1, vector<int> &nums2)
{
    vector<int> ans;
    set<int> s;
    for (int i = 0; i < nums1.size(); i++)
    {
        for (int j = 0; j < nums2.size(); j++)
        {
            if (nums1[i] == nums2[j])
            {
                s.insert(nums2[i]);
                nums2[i] = -11111;
                nums2[j] = -1111;
            }
        }
    }
    for (auto it = s.begin(); it !=
                              s.end();
         ++it)
    {
        int tmp = *it;
        ans.push_back(tmp);
    }

    return ans;
}

int main()
{
    vector<int> arr1 = {2,1};
    vector<int> arr2 = {1,2};
    vector<int> arr3;
    arr3 = intersection(arr1, arr2);
    for (int i = 0; i < arr3.size(); i++)
    {
        cout << arr3[i] << " ";
    }

    return 0;
}