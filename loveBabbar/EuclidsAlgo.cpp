#include<iostream>
#include<vector>
using namespace std;

int  GCD(int a,int b){
    if (a==0)
        return b;
    if(b==0)
        return a;
    while (a!=b)
    {
        if(a>b)
            a = a-b;
        else if(b>a)
            b = b-a;    
    }
    return a;

}

int GCDre(int a,int b){
    if(a==0)
        return b;
    if(b==0)
        return a;
    return GCDre(a-b,b);
}

int main()
{
    // cout<<GCD(3,8);
    cout<<6%1000000007;

}