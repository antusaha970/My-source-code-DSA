#include<iostream>
#include<string>
using namespace std;

void revStr(string s){

    //base case 
    if(s.length()==0)
        return;
    string ros = s.substr(1);
    revStr(ros);
    cout<<s[0];



}


int main()
{
    string s = "antu saha";
    revStr(s);
    return 0;
}