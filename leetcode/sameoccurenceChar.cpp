#include <iostream>
#include <string>
#include <map>
using namespace std;

bool areOccurrencesEqual(string s)
{
    map<char, int> m;
    int tmp;
    for (int i = 0; i < s.size(); i++)
    {
        m[s[i]]++;
    }
    tmp = m[s[0]];
    for (auto i : m)
    {
        if (tmp != i.second)
        {
            return false;
        }
        tmp = i.second;
    }
    return true;
}

int main()
{
    map<char, int> m;
    m['a']++;
    m['a']++;
    m['a']++;
    cout << m['a'];

    return 0;
}