#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    vector<int> matrix = {1,2,3,4,4,4,5,6,9,100};
    int j = upper_bound(matrix.begin(),matrix.end(),4) - matrix.begin();
    cout<<j;

    return 0;
}