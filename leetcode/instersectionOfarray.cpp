#include <iostream>
#include <map>
#include <vector>
using namespace std;

/*
    Frist we will count one array using map. Then From another array we will see that element is available in
    the map or not if available in map then we will push it to ans array and decrement it.
    Time Compliexty = O(n)
*/

vector<int> intersect(vector<int> &nums1, vector<int> &nums2)
{
    map<int, int> countArr1;
    for (int i : nums1)
    {
        countArr1[i]++;
    }
    vector<int> ans;
    for (int i : nums2)
    {

        if (countArr1[i] > 0)
        {
            ans.push_back(i);
            countArr1[i]--;
        }
    }
    return ans;
}

int main()
{

    return 0;
}