#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;

/*
    we will frist sort any of one array. Then we will run binary search in the sorted array with the target element
    of another unsorted array. if we found the target element we will return it and erase it . we will put
    all return valus to the set so that no duplicate value can occurres . Finaly we will take out set elements and put
    it in an array and return it.
*/

int binarySearch(vector<int> &nums1, int target)
{
    int start, mid, end, ans = -1;
    start = 0;
    end = nums1.size() - 1;
    while (start <= end)
    {
        mid = (start + end) / 2;
        if (nums1[mid] == target)
        {
            ans = nums1[mid];
            nums1.erase(nums1.begin() + mid);
            return ans;
        }
        if (nums1[mid] > target)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    return -1;
}

vector<int> intersection(vector<int> &nums1, vector<int> &nums2)
{
    sort(nums1.begin(), nums1.end());
    vector<int> ans;
    set<int> s;
    for (int i : nums2)
    {
        int tmp = binarySearch(nums1, i);
        if (tmp >= 0)
        {
            s.insert(tmp);
        }
    }
    for (auto it = s.begin(); it != s.end(); it++)
    {
        int tmp = *it;
        ans.push_back(tmp);
    }
    return ans;
}

int main()
{

    return 0;
}