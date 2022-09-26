#include <iostream>
#include <vector>
using namespace std;

vector<int> arrayRankTransform(vector<int> &arr)
{
    vector<int> ans;
    vector<int> tmp = arr;
    sort(tmp.begin(), tmp.end());
    int count;
    for (int i = 0; i < arr.size(); i++)
    {
        count = 0;
        for (int j = 0; j < tmp.size(); j++)
        {
            if (arr[i] > tmp[j])
            {
                count++;
            }
            else
            {
                break;
            }
        }
        if (count == 0)
        {
            ans.push_back(1);
        }
        ans.push_back(count);
    }
    return ans;
}

int main()
{

    return 0;
}