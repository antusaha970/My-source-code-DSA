#include<iostream>
#include<string>
using namespace std;

void SayDig(int n){
    
    //base case
    if(n==0)
        return;
    int dig = n%10;
    n /= 10;
    static string arr[10] = {"zero","one","two","three","four","five","six","seven","eight","nine"};
    SayDig(n);
    cout<<arr[dig]<<",";
}


int main()
{
    SayDig(585);
    return 0;
}