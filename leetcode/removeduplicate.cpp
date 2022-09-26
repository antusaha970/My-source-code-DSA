#include <iostream>
#include <stack>
#include <string>
using namespace std;

string removeDuplicates(string s)
{
    // frist we need to create a stack using C++ STL
    stack<char> afterRemove;
    for (int i = 0; i < s.size(); i++)
    {
        // here we will check if our stack elements match with the s[i] element if match we will remove it and we will also check if stack is empty or not

        if (!afterRemove.empty() && s[i]==afterRemove.top())
        {
            afterRemove.pop();
        }
        else{

        afterRemove.push(s[i]);
        }
    }
    // string for our answer
    string ans = "";
    // we will add stack elements to the string
    while (afterRemove.empty())
    {
        ans = ans+afterRemove.top();
        // pop untill the stack is empty
       
        afterRemove.pop();
    }
    return ans;
}

string removeDuplicates(string s)
{

    string ans = "";
    for (int i = 0; i < s.size(); i++)
    {
        
        if (s[i]==ans.back())
        {
            ans.pop_back();
        }
        else{
            ans.push_back(s[i]);
        }
        
    }
    return ans;
}

int main()
{
    string a = "antu";
    a.pop_back();
    a.push_back('c');
    cout << a.back() << endl;

    return 0;
}