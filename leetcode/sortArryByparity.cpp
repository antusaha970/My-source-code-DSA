#include <iostream>
#include <vector>
using namespace std;

vector<int> sortArrayByParity(vector<int> &nums)
{
    // we will use two pointer approch 
    // DRY run this code for better understanding 
    int i, j;
    i = 0;
    j = nums.size() - 1;
    while (i < j)
    {
        if (nums[i] % 2 != 0 && nums[j] % 2 == 0)
        {
            int tmp = nums[i];
            nums[i] = nums[j];
            nums[j] = tmp;
            i++;
            j--;
        }
        else if (nums[i] % 2 != 0 && nums[j] % 2 != 0)
        {
            j--;
        }
        else if (nums[i] % 2 == 0 && nums[j] % 2 == 0)
        {
            i++;
        }
        else{
            i++;
            j--;
        }
    }
    return nums;
}

int main()
{
    int j = 0%2;
    cout<<j;

    return 0;
}