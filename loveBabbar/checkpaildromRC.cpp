#include<iostream>
#include<string>
using namespace std;

bool isPailDrom(string s,int i,int j){
    // base case
    if(i>j)
        return true;
    
    // Recursive relation
    if(s[i]!=s[j])
        return false;
    
    return isPailDrom(s,i+1,j-1);
}


int main()
{
    string s = "ababtaba";
    if(isPailDrom(s,0,s.size()-1))
        cout<<"Yes it's a paildrom";
    else
        cout<<"No sorry this is not a paildrom";
    return 0;
}