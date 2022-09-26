#include <iostream>
#include <stack>
using namespace std;


// match function
bool match(char open, char close)
{
    if (open == '(' && close == ')' || open == '{' && close == '}' || open == '[' && close == ']')
    {
        return true;
    }
    return false;
}

bool isValid(string s)
{
    // Frist we will make stack for the paresthesis to store and pop
    stack<char> storeHouse;
    char popedChar;
    // now we will go thgorouth the string and our main operation will be occears in the loop
    for (int i = 0; i < s.length(); i++)
    {
        // frist we will push elements if this is a opening parenthesis
        if (s[i] == '(' || s[i] == '{' || s[i] == '[')
        {
            storeHouse.push(s[i]);
        }
        // now if parenthesis is closing one we will check if both are matching or not
        else if (s[i] == ')' || s[i] == '}' || s[i] == ']')
        {
            // if stack is empty parenthesis are invalid
            if (storeHouse.empty())
            {
                return false;
            }
            // we will store top char before poped up
            popedChar = storeHouse.top();
            // now we will check if both are matched ()
            if (!match(popedChar, s[i]))
            {
                return false;
            }
            storeHouse.pop();
        }
    }
    // if stack is empty the parenthesis is vaild if not is not vaild
    return storeHouse.empty();
}

int main()
{

    return 0;
}