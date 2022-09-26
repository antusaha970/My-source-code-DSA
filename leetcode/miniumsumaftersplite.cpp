#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int sumTwo(int a, int b)
{
    // hare we will sum them
    int ans = (a * 10) + b;
    return ans;
}

int minimumSum(int num)
{
    // frist we will make a array for store the digits
    vector<int> forStore;
    while (num != 0)
    {
        int tmp = num % 10;
        forStore.push_back(tmp);
        num /= 10;
    }
    // after storing them we will sort them
    sort(forStore.begin(), forStore.end());
    int ans = 0;
    // then we will sum them with a format such that always small sum always came
    ans = sumTwo(forStore[0], forStore[3]) + sumTwo(forStore[1], forStore[2]);
    return ans;
    // for a batter understanding DRY run this code 
}

int main()
{
    cout << minimumSum(4009) << endl;
    return 0;
}