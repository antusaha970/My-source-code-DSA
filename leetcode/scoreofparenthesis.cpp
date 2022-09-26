#include <iostream>
#include <stack>
#include <string>
using namespace std;

int scoreOfParentheses(string s)
{
    stack<char> st;
    int ans = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i]=='(')
        {
            st.push(s[i]);
        }
        else if (!st.empty() && s[i]==')')
        {
            
        }
    }
    return ans;
    
}

int main()
{

    return 0;
}