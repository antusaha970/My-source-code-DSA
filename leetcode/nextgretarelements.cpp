#include <iostream>
#include <vector>
using namespace std;

vector<int> nextGreaterElement(vector<int> &nums1, vector<int> &nums2)
{
    vector<int> ans;
    for (int i = 0; i < nums1.size(); i++)
    {
        int tmp = nums1[i];
        int flag = 1;
        for (int j = 0; j < nums2.size(); j++)
        {
            if (tmp==nums2[j] && j!=nums2.size()-1)
            {
                if (tmp<nums2[j+1])
                {
                    ans.push_back(nums2[j+1]);
                    flag = 0;
                    break;
                }   
            }
        }
        if (flag)
        {
            ans.push_back(-1);
        }
        
    }
    return ans;
}

int main()
{
    vector<int> a = {4,1,2};
    vector<int> b = {1,3,4,2};
    vector<int> c;
    c = nextGreaterElement(a,b);
    for (int i = 0; i < c.size(); i++)
    {
        cout<<c[i]<<endl;
    }
    

    return 0;
}