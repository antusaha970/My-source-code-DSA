#include <iostream>
#include <stack>
#include <string>
using namespace std;

bool Parenthiesmatch(string exp)
{
    stack<char> storeHouse;
    for (int i = 0; i < exp.length(); i++)
    {
        if (exp[i]=='(')
        {
            storeHouse.push('(');
        }
        else if (exp[i]==')')
        {
            if (storeHouse.empty())
            {
                return false;
            }
            storeHouse.pop();
            
        }
        
        
    }
    return storeHouse.empty();
    
}

int main()
{
     string exp = "()()(";
    if (Parenthiesmatch(exp))
    {
        cout<<"Parenthesis matched "<<endl;
    }
    else{
        cout<<"Parenthesis not matched "<<endl;

    }

    return 0;
}