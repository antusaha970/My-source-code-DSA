#include <iostream>
#include<string>
#include<stack>
using namespace std;

int minAddToMakeValid(string s)
{
    // make a stack to store the parenthesis
    stack<char> st;
    for (int i = 0; i < s.length(); i++)
    {
        // store the perenthesis if its opening
        if (s[i]=='(')
        {
            st.push('(');
        }
        // check if both are matched if matched poped up or push
        else if (!st.empty() && s[i]==')')
        {
            char tmp = st.top();
            if (tmp=='(')
            {
                st.pop();
            }
            else{
                st.push(s[i]);
            }
        }
        // if none condition come true just push it
        else{
            st.push(s[i]);
        }
        
    }
    // now count and return the ans
    int ans = 0;
    while (!st.empty())
    {
        ans++;
        st.pop();
    }
    return ans;
    
    
}

int main()
{

    return 0;
}