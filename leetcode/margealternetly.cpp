#include <iostream>
#include <string>
using namespace std;

string mergeAlternately(string word1, string word2)
{
    string ans = "";
    int i, j;
    i = j = 0;
    while (i < word1.size() || j < word2.size())
    {
        ans += word1[i];
        ans += word2[j];
        i++;
        j++;
    }
    while (i < word1.size())
    {
        ans += word1[i];
        i++;
    }
    while (j < word2.size())
    {
        ans += word2[j];
        j++;
    }

    return ans;
}

int main()
{

    return 0;
}