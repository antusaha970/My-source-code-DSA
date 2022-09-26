#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int numberOfWeakCharacters(vector<vector<int>> &properties)
{
    stack<int> attack;
    stack<int> diffence;
    for (int i = 0; i < properties.size(); i++)
    {
        vector<int> tmp;
        tmp = properties[i];
        attack.push(tmp[0]);
        diffence.push(tmp[1]);
    }
    int ans = 0;
    while (!attack.empty())
    {
         int atk, dif;
        atk = attack.top();
        dif = diffence.top();
        attack.pop();
        diffence.pop();
        if (atk <= attack.top() && dif <= diffence.top() && !attack.empty() && !diffence.empty())
        {
            ans++;
        }
    }
    
    

    return ans;
}

int main()
{
    vector<vector<int>> v = {{1,5},{10,4},{4,3}};
    cout<<numberOfWeakCharacters(v);

    return 0;
}