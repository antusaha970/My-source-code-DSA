#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<string> buildArray(vector<int> &target, int n)
{
    vector<string> ans;
    // this var is for matching
    int j = 1;
    for (int i = 0; i < target.size();)
    {
        // we will increase i in the if statement not in for loop
        if (target[i]==j)
        {
            ans.push_back("Push");
            i++;
        }
        else{
            ans.push_back("Push");
            ans.push_back("Pop");
        }
        j++;
    }
    // DRY run this code one time you will understand the full logic 
    return ans;
    
}

int main()
{

    return 0;
}