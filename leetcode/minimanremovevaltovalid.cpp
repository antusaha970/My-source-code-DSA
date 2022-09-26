#include <iostream>
#include <stack>
#include <string>
using namespace std;

string minRemoveToMakeValid(string s)
{
    stack<char> st;
    string ans = "";
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i]=='(')
        {
            st.push(s[i]);
            ans = ans+s[i];
        }
        else if (s[i]==')')
        {
            if (!st.empty() && st.top()=='(')
            {
                st.pop();
                ans = ans+s[i];
            }
        }
        else{
            ans = ans+s[i];
        }
        
    }
    return ans;
    
}

int main()
{

    return 0;
}