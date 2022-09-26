#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool canBeEqual(vector<int> &target, vector<int> &arr)
{
    sort(target.begin(),target.end());
    sort(arr.begin(),arr.end());
    return target==arr;
}

int main()
{
    vector<int> arr1 = {2,3};
    vector<int> arr2 = {6,7};
    cout<<canBeEqual(arr1, arr2);

    return 0;
}