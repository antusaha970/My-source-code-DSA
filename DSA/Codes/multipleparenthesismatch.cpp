#include <iostream>
#include <stack>
#include <string>
using namespace std;

bool match(char open, char close)
{
    if (open == '(' && close == ')' || open == '{' && close == '}' || open == '[' && close == ']')
    {
        return true;
    }
    return false;
}
bool balencedParenthesis(string str)
{
    stack<char> storeHouse;
    char popChar;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == '(' || str[i] == '{' || str[i] == '[')
        {
            storeHouse.push(str[i]);
        }
        else if (str[i] == ')' || str[i] == '}' || str[i] == ']')
        {
            if (storeHouse.empty())
            {
                return false;
            }
            popChar = storeHouse.top();
            storeHouse.pop();
            if (!match(popChar, str[i]))
            {
                return false;
            }
        }
    }

    return storeHouse.empty();
}

int main()
{
    string exp = "[()]{}";
    if (balencedParenthesis(exp))
    {
        cout << "Parenthesis matched " << endl;
    }
    else
    {
        cout << "Parenthesis not matched " << endl;
    }

    return 0;
}