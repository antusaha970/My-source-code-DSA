#include <iostream>
#include <vector>
#include <string>
using namespace std;

string restoreString(string s, vector<int> &indices)
{
    vector<char> strH(indices.size());
    string ans = "";
    for (int i = 0; i < indices.size(); i++)
    {
        strH[indices[i]] = s[i];
    }
    for (int i = 0; i < strH.size(); i++)
    {
        ans += strH[i];
    }
    return ans;
}

int main()
{
    vector<int> arr(5);
    for (int i : arr)
    {
        cout << i << endl;
    }
    return 0;
}