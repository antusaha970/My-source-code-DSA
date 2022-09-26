#include <iostream>
#include <stack>
#include <string>
#include <cctype>
#include<algorithm>
using namespace std;

string makeGood(string s)
{
    stack<char> st;
    string ans = "";
    int n = s.length();
    for (int i = n-1; i >= 0; i--)
    {
        if (!st.empty() && abs((s[i] - st.top()))==32)
        {
            st.pop();
        }
        else{
            st.push(s[i]);
        }
        
    }
    while (!st.empty())
    {
        ans = ans+st.top();
        st.pop();
    }
    // reverse(ans.begin(),ans.end());
    return ans;
     stack<char> str;
        string output = "";
        int n = s.length();
        for(int i=n-1;i>=0;i--){
            if(!str.empty() && abs(s[i] - str.top()) == 32){
                str.pop();
            }
            else{
                str.push(s[i]);
            }
        }
        while(!str.empty()){
            output = output + str.top();
            str.pop();
        }
        return output;
    
}

int main()
{
    cout<<makeGood("Pp");
    // cout<<abs('b'-'B');

    return 0;
}