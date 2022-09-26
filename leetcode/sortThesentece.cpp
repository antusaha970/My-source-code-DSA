#include <iostream>
#include <vector>
#include <string>
using namespace std;

string sortSentence(string s)
{
    vector<string> str(25);
   
        for (int j = 0; j < s.size(); j++)
        {
            string tmp = "";
            if(s[j] == '1' || s[j] == '2' ||s[j] == '3' ||s[j] == '4' ||s[j] == '5' || s[j] == '6' || s[j] == '7' || s[j] == '8' || s[j] == '9'){
               str[int(j)] = tmp;
               tmp = "";
            }
            else{
                tmp += s[j];
            }
        }
        

    string ans ="";
    for (int i = 0; i < str.size(); i++)
    {
        ans += str[i];
    }
    return ans;
    
    
}

int main()
{
    // cout<<<<endl;
    return 0;
}