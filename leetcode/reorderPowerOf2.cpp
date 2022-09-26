#include <iostream>

using namespace std;

bool reorderedPowerOf2(int n)
{
    int tmp = n;
    while (tmp%2==0)
    {
        tmp /=2;
    }
    if(tmp==1) return true;
    int rev = 0;
    while (n!=0)
    {
        int tmpN= n%10;
        n /= 10;
        rev = (rev*10) +tmpN;
    }
    if(rev==1) return false;
    while (rev%2==0)
    {
        rev /=2;
    }

    if(rev==1) return true;
    else return false;
    

    
}

int main()
{

    return 0;
}