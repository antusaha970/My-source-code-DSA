#include<iostream>
#include<cmath>
#include<vector>
#include<algorithm>
using namespace std;

void printAll(vector<int> v,int div){
    for(auto i:v){

        double c = ceil((double)i/div);
        cout<<c<<" ";


    }
}


int main()
{
    vector<int> ans = {5,8,6};
    printAll(ans,5);
    return 0;
}