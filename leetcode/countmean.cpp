#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

double trimMean(vector<int> &arr)
{
    // Mean means avarage we have to remove frist 5%  minimum element and last 5% maximum element
    // so we will start our loop from frist 5% and finised in before last 5% after sorting and sum all and we will use avarage formula
    sort(arr.begin(), arr.end());
    int percentage = (arr.size()) * 0.05;
    int sum = 0;
    for (int i = percentage; i < arr.size() - percentage; i++)
    {
        sum += i;
    }
    double size = arr.size();
    double ans = sum / (size - 2 * percentage);
    return ans;
}

int main()
{

    return 0;
}