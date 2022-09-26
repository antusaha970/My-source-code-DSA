#include <iostream>
#include <vector>
using namespace std;

void sortColors(vector<int> &nums)
{
    int mid, low, high;
    low = mid = 0;
    high = nums.size() - 1;
    while (mid <= high)
    {
        if (nums[mid] == 0)
        {
            swap(nums[mid], nums[low]);
            low++;
            mid++;
        }
        else if (nums[mid] == 2)
        {
            swap(nums[mid], nums[high]);
            high--;
        }
        else
        {
            mid++;
        }
    }
}

int main()
{
    vector<int> arr = {0, 1};
    sortColors(arr);
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}