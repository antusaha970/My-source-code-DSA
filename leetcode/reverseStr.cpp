#include <iostream>
#include <vector>
using namespace std;

void reverseString(vector<char> &s)
{
    int start = 0;
    int end = s.size()-1;
    while (start<=end)
    {
        char tmp = s[start];
        s[start] = s[end];
        s[end]= tmp;
        start++;
        end--;
    }
    
}

int main()
{

    return 0;
}