#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int findTheDistanceValue(vector<int> &arr1, vector<int> &arr2, int d)
{
    int ans;
    sort(arr2.begin(), arr2.end());
    for (int i = 0; i < arr1.size(); i++)
    {
        int low, high;
        low = 0;
        high = arr2.size() - 1;
        while (low <= high)
        {
            int mid;
            mid = (low + high) / 2;
            int tmp = abs(abs(arr1[i]) - abs(arr2[mid]));
            if (tmp == d)
            {
                ans = i;
                break;
            }
            if (tmp > d)
            {
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }
    }
    return ans;
}

int main()
{

    return 0;
}