#include<iostream>
#include<vector>
using namespace std;

int baseConverter(int num,int base){
    vector<int> ans ;
    while (num!=0)
    {
        int reminder = num%base;
        ans.push_back(reminder);
        num /= base;
    }
    for(auto i:ans){
        cout<<i<<" ";
    }
}
int main()
{
    // baseConverter(589,3);


    char a = 'z';
    int num = 0;
    num = a - 'a';
    // Here we will get index of 25
    cout<<num<<endl;
    // Here we will get z
    cout << num + 'a';

    return 0;
}