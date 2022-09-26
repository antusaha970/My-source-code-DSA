#include <iostream>
#include <vector>
using namespace std;
// k = 2 
void rotate(vector<int> &nums, int k)
{
    vector<int> tmp(nums.size());
    for (int i = 0; i < nums.size(); i++)
    {
        tmp[(i+k)%nums.size()]= nums[i];
    }
    
    nums = tmp;
    
    

}

int main()
{
    vector<int> arr={1,2,3,4,5};
    // rotate(arr,3);
    cout<<7%5;

    return 0;
}