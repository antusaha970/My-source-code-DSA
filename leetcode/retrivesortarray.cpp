#include <iostream>
#include <vector>
#include <map>
#include<algorithm>
using namespace std;

vector<int> relativeSortArray(vector<int> &arr1, vector<int> &arr2)
{
    // frist we will add arr2 element to a map
    map<int, int> count;
    for (int i:arr2){
        count[i]++;
    }
    vector<int> ans,compare;
    // then we will add similer item in ans array
    for (int i = 0; i < arr2.size(); i++)
    {
        for (int j = 0; j < arr1.size(); j++)
        {
            if(arr2[i]==arr1[j])
                ans.push_back(arr1[j]);
        }
    }
    // then we will add elements thats are not present in arr2 ans sort them
    for (int i:arr1){
        if(!count[i])
            compare.push_back(i);
    }
    sort(compare.begin(),compare.end());
    // finaly we will add sorted elements to ans array
    for(int i:compare)
        ans.push_back(i);
    return ans;

}

int main()
{
    vector<int> test = {2, 3, 12, 3};
    vector<int> cest = {9,10};
    vector<int> final;
    for (int i : final)
    {
        cout << i << " ";
    }

    return 0;
}