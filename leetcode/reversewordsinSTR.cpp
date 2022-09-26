#include <iostream>
#include <string>
using namespace std;

void helper(string &ans, int i, int j)
{
    while (i <= j)
    {
        swap(ans[i], ans[j]);
        i++;
        j--;
    }
}

string reverseWords(string s)
{
    int tmp = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] ==' ')
        {
            helper(s, tmp, i - 1);
        }
        if (i == s.size() - 1)
        {
            helper(s, tmp, i);
        }
        tmp = i + 1;
    }
    return s;
}

int main()
{

    return 0;
}