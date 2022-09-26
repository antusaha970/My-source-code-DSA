#include <iostream>
#include <vector>
using namespace std;

char nextGreatestLetter(vector<char> &letters, char target)
{
    int start, mid, end;
    start = 0;
    end = letters.size() - 1;
    char ans = letters[0]; // if there is no element lager then target then arrays 0 element will be the ans
    while (start <= end)
    {
        mid = (start + end) / 2;
        if (letters[mid] == target) // if mid == target then we need to move start beacuse before mid every letter will be smaller
        {
            start = mid + 1;
        }
        else if (letters[mid] > target) // if mid is lager then target we will store it in ans and move our end beacuse every element after mid will be bigger
        {
            ans = letters[mid];
            end = mid - 1;
        }
        else // if mid is smaller then we will move our start
        {
            start = mid + 1;
        }
    }
    return ans; // after loop return the ans
}

int main()
{

    return 0;
}