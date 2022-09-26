#include <iostream>
#include<stack>
#include<string>
using namespace std;

bool backspaceCompare(string s, string t)
{
    stack<char> stk1;
    stack<char> stk2;
    string ans1="";
    string ans2="";
    for (int i = 0; i < s.length(); i++)
    {
       char tmp  = s[i];
        if (tmp!='#')
        {
            stk1.push(tmp);
        }
        else if (!stk1.empty())
        {
            stk1.pop();
        }
    }
    for (int i = 0; i < t.length(); i++)
    {
      char tmp  = t[i];
        if (tmp!='#')
        {
            stk2.push(tmp);
        }
        else if (!stk2.empty())
        {
            stk2.pop();
        }
    }
    while (!stk1.empty())
    {
        ans1 = ans1+stk1.top();
        stk1.pop();
    }
    while (!stk2.empty())
    {
        ans2 = ans2+stk2.top();
        stk2.pop();
    }
    
    
    return ans1==ans2;

}

int main()
{
    string s = "ab##";
    string t = "c#d#";
    s.erase(s.front());
    cout<<s<<endl;
    // cout<<backspaceCompare(s,t)<<endl;

    
    

    return 0;
}