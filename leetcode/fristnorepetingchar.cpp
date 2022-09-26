#include <iostream>
#include <unordered_map>
#include <queue>
#include <string>
using namespace std;

int firstUniqChar(string s)
{
    // make variable for ans 
    int ans = -1;
    // make a map for counting how many times a alphabet come in the string 
    unordered_map<char, int> count;
    // counting the alphabets
    for (int i = 0; i < s.length(); i++)
    {
        char tmp = s[i];
        count[tmp]++;
    }
    // Now we will find the frist unique 
    for (int i = 0; i < s.length(); i++)
    {
        char tmp = s[i];
        // If we found the unique charather the we will overwrite the ans and break the loop
        if (count[tmp] == 1){
            ans = i;
            break;
        }
    }
    // return the ans 
    return ans;
}

int main()
{
    cout<<firstUniqChar("leetcode")<<endl;
    return 0;
}