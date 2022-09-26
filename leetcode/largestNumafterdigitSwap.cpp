#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int largestInteger(int num)
{
    vector<int> stStore, revStore;
    int ans = 0;
    while (num != 0)
    {
        int tmp = num % 10;
        stStore.push_back(tmp);
        revStore.push_back(tmp);
        num /= 10;
    }
    reverse(revStore.begin(), revStore.end());
    sort(stStore.begin(), stStore.end(), greater<int>());
    for (int &i : revStore)
    {
        for (int j = 0; j < stStore.size(); j++)
        {
            if (i % 2 == 0)
            {
                if (stStore[j] % 2 == 0 && stStore[j] >= 0)
                {
                    ans = (ans * 10) + stStore[j];
                    stStore[j] = -1;
                    break;
                }
            }
            else
            {
                if (stStore[j] % 2 != 0 && stStore[j] >= 0)
                {
                    ans = (ans * 10) + stStore[j];
                    stStore[j] = -1;
                    break;
                }
            }
        }
    }
    return ans;
}

int main()
{
    vector<int> arr = {1, 2, 3, 4};
    for (int &i : arr)
    {
        i = 3;
        cout << i << " ";
    }
    cout << arr[0];
    return 0;
}