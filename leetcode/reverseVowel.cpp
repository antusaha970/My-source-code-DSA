#include <iostream>
#include <string>
using namespace std;
string reverseVowels(string s)
{
    int start = 0;
    int end = s.size() - 1;
    while (start <= end)
    {
        if (s[start] == 'a' || s[start] == 'e' || s[start] == 'i' || s[start] == 'o' || s[start] == 'u')
        {
            if (s[end] == 'a' || s[end] == 'e' || s[end] == 'i' || s[end] == 'o' || s[end] == 'u')
            {
                char tmp = s[start];
                s[start] = s[end];
                s[end] = tmp;
            }
        }

        start++;
        end--;
    }
    cout << s;
    // return s;
}

int main()
{
    string s = "hello";
    reverseVowels(s);
    return 0;
}