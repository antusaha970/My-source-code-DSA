#include <iostream>
#include <vector>
using namespace std;

int findFinalValue(vector<int> &nums, int original)
{
    int i = 0;
    while (true)
    {
        int flag = 1;
        i = 0;
        while (i < nums.size())
        {
            if (nums[i] == original) // if element found we will not break the loop and continue
            {
                original *= 2;
                flag = 0;
            }
            i++;
        }

        if (flag) // if after multiplaying orginal element not found in array we will break the loop and return
        {
            break;
        }
    }

    return original;
}

int main()
{

    return 0;
}