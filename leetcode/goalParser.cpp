#include <iostream>
#include <string>
using namespace std;

string interpret(string command)
{
    // Please DRY run yourself for a better understanding 
    string ans = "";
    for (int i = 0; i < command.size(); i++)
    {
        if(command[i]=='G'){
            ans += "G";
        }
        if(command[i]=='('){
            if(command[i]=='(' && command[i+1]==')'){
                ans += "o";
            }
            else if (command[i]=='(' && command[i+1]=='a')
            {
                ans += "al";
            }
        }
    }
    return ans;
    
}

int main()
{

    return 0;
}