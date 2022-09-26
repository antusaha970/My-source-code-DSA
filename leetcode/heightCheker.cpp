#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int heightChecker(vector<int> &heights)
{
    // just sort and compare the orginal array if not matched then incress count 
    int ans = 0;
    vector<int> tmp = heights;
    sort(tmp.begin(), tmp.end());
    for (int i = 0; i < heights.size(); i++)
    {
        if (tmp[i] != heights[i])
            ans++;
    }
    return ans;
}

int main()
{

    return 0;
}