#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

int minDifferance(vector<int> arr)
{
    int ans = INT_MAX;
    int flag = 0;
    for (int i = 0; i < arr.size() - 1; i++)
    {
        int tmp = arr[i] - arr[i + 1];
        if(tmp<0){
            tmp *= -1;
        }
        ans = min(ans, tmp);
    }
    return ans;
}

vector<vector<int>> minimumAbsDifference(vector<int> &arr)
{
    sort(arr.begin(), arr.end());
    int minAbs;
    minAbs = minDifferance(arr);
    vector<vector<int>> ans;
    for (int i = 0; i < arr.size() - 1; i++)
    {
        int tmp;
        vector<int> tmpV;
        if (arr[i] - arr[i + 1] == minAbs)
        {
            tmpV.push_back(arr[i]);
            tmpV.push_back(arr[i + 1]);
            ans.push_back(tmpV);
        }
        tmpV.clear();
    }
    return ans;
}

int main()
{

    return 0;
}