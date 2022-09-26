#include <iostream>
#include <map>
using namespace std;

string toLowerCase(string s)
{

    static map<char, char> m = {
        {'A', 'a'},
        {'B', 'b'},
        {'C', 'c'},
        {'D', 'd'},
        {'E', 'e'},
        {'F', 'f'},
        {'G', 'g'},
        {'H', 'h'},
        {'E', 'e'},
        {'I', 'i'},
        {'J', 'j'},
        {'K', 'k'},
        {'L', 'l'},
        {'M', 'm'},
        {'N', 'n'},
        {'O', 'o'},
        {'R', 'r'},
        {'S', 's'},
        {'T', 't'},
        {'P', 'p'},
        {'Q', 'q'},
        {'U', 'u'},
        {'V', 'v'},
        {'W', 'w'},
        {'X', 'x'},
        {'Y', 'y'},
        {'Z', 'z'},
    };
    string ans = "";
    for (int i = 0; i < s.size(); i++)
    {
        if (abs(s[i]) <= 90 && abs(s[i]) >= 65)
        {
            ans += m[s[i]];
        }
        else
        {
            ans += s[i];
        }
    }
    return ans;
}

int main()
{
    cout << toLowerCase("ANTU saha") << endl;
    return 0;
}