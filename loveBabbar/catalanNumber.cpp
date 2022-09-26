#include <iostream>
#include <vector>
using namespace std;

long catalanNum(int n)
{
    if (n <= 1)
        return 1;
    long result = 0;
    for (int i = 0; i < n; i++)
    {
        result += catalanNum(i) * catalanNum(n - 1 - i);
    }
    return result;
}

int catalanNumDynamic(int n)
{
    vector<int64_t> v(n + 1, 0);
    v[0] = 1;
    v[1] = 1;
    for (int i = 2; i <= n; i++)
    {
        for (int j = 0; j < i; ++j)
        {
            v[i] += v[j] * v[i - j - 1];
        }
    }
    return v[n];
}



int main()
{
    // for(int i = 1;i<=19;i++){
    //     cout<<"The "<<i<<" cataon num is "<<catalanNum(i)<<endl;
    // }
    // for (int i = 1; i <= 19; i++)
    // {
    //     cout << "The " << i << " cataon num is " << catalanNumDynamic(i) << endl;
    // }
    int a(10000);
    cout<<a;

    return 0;
}