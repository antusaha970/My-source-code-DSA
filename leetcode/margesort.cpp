#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
{
    // this problem cotain marge sort algorithmn 
    // for better understanding frist you should learn Marge Sorting algorithmn
    vector<int> sTore;
    int i, j;
    i = j = 0;
    while (i < m && j < n)
    {
        if (nums1[i] < nums2[j])
        {
            sTore.push_back(nums1[i]);
            i++;
        }
        else
        {
            sTore.push_back(nums2[j]);
            j++;
        }
    }
    while (i < m)
    {
        sTore.push_back(nums1[i]);
        i++;
    }
    while (j < n)
    {
        sTore.push_back(nums2[j]);
        j++;
    }
    for (int i = 0; i < sTore.size(); i++)
    {
        nums1[i] = sTore[i];
    }
    
}

int main()
{

    return 0;
}