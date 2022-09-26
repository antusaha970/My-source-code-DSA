#include <iostream>
#include <string>
using namespace std;

bool isVowel(char tmp)
{
    if ((tmp == 'a') || (tmp == 'e') || (tmp == 'i') || (tmp == 'o') || (tmp == 'u') || (tmp == 'A') || (tmp == 'E') || (tmp == 'I') || (tmp == 'O') || (tmp == 'U'))
    {
        return true;
    }
    return false;
}

string reverseVowels(string s)
{
    int start, end;
    start = 0;
    end = s.size() - 1;
    while (start < end)
    {
        while (start < s.size() && !isVowel(s[start]))
        {
            start++;
        }
        while (start < end && !isVowel(s[end]))
        {
            end--;
        }
        if (start < end)
        {
            swap(s[start], s[end]);
            start++;
            end--;
        }
    }

    return s;
}

int main()
{
    string a = "7";
    cout<<abs(7)+1;



    return 0;
}