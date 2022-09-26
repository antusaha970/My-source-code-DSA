#include<iostream>
#include<string>
#include<cmath>
using namespace std;

string removeDup(string s){

    if(s.length()==0)
        return "";
    char ch = s[0];
    string ans = removeDup(s.substr(1));
    if(ch==ans[0])
        return ans;
    return ch+ans;

}



int main()
{
    // char a = 'z';
    // int num = 0;
    // // num = a - 'a';
    // char j = num + 'v';
    // // Here we will get index of 25
    // cout<<num<<endl;
    // // Here we will get z
    // cout << j;
    // int i = 0;
    // if(i&1){
    //     cout<<"odd";
    // }
    // else{
    //     cout<<"even";
    // }

    // basicly we will get the next character 
    // char ch = ('a'-'0')+'1';
    // cout<<ch;
    // int num = 100005;
    // if(!(num&1))
    //     cout<<"even";
    // else
    //     cout<<"Odd";
    // int k = 188;
    // int j(k);
    // cout<<j<<endl;
    // j = 99;
    // cout<<j+9*8;
    double j = 7/3;
    cout<<ceil((double) 7/3);
    return 0;
}