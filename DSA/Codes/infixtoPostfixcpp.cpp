#include <iostream>
#include <stack>
#include <string>
using namespace std;

bool isOperator(char ch)
{
    if (ch == '+' || ch == '-' || ch == '*' || ch == '/')
        return true;
    else
        return false;
}

int precedence(char ch)
{
    if (ch == '+' || ch == '-')
        return 1;
    else if (ch == '*' || ch == '/')
    {
        return 2;
    }
    return 0;
}

string infixToPostfix(string infix)
{
    stack<char> st;
    int flag = 1;
    string ans1 = "";
    for (int i = 0; i < infix.length(); i++)
    {
        if (!isOperator(infix[i]))
        {
            ans1 = ans1 + infix[i];
        }
        else
        {
            if (st.empty() && flag == 1)
            {
                st.push(infix[i]);
                flag = 0;
            }
            else if (precedence(infix[i]) > precedence(st.top()))
            {

                st.push(infix[i]);
            }
            else
            {
                while (!st.empty())
                {
                    char tmp = st.top();
                    ans1 = ans1 + tmp;
                    st.pop();
                }
                st.push(infix[i]);
            }
        }
    }
    while (!st.empty())
    {
        ans1 = ans1 + st.top();
        st.pop();
    }
    return ans1;
}

int main()
{
    string j = "x-y/z-k*d";
    cout << infixToPostfix(j) << endl;

    return 0;
}