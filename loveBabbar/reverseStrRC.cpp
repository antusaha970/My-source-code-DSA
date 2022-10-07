#include<iostream>
#include<string>
using namespace std;

// string RS(string &s,int i,int j){
//     if(i>j)
//         return s;
//     swap(s[i],s[j]);
//     i++;
//     j--;
//     return RS(s,i,j);
// }

string RSopti(string &s,int n,int i){
    cout<<s[i]<<" "<<s[n-i-1]<<endl;
    cout<<i<<" "<<n-i-1<<endl;
    if(i>n-i-1){
        return s;
    }
    swap(s[i],s[n-i-1]);
    i++;
    return RSopti(s,n,i); 

}

int main()
{
    string s = "Antu saha";
    cout<<RSopti(s,s.length(),0);
    return 0;
}