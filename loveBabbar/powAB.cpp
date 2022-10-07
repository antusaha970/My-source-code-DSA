#include <iostream>
using namespace std;

int power(int a, int b)
{
    // base case
    if (b == 0)
        return 1;
    if (b == 1)
        return a;

    // Recursive Call
    int ans = power(a, b / 2);
    if (b % 2 == 0)
        return ans * ans;
    else
        return a * ans * ans;
}

double Pow(int x, int n)
{
    // base case
    if (n == 0)
        return 1;
    if (n == 1)
        return x;
    // Recursive Relation
    double ans = Pow(x, n / 2);
    if (n % 2 == 0)
        return 1 / (ans * ans);
    return 1 / (x * ans * ans);
}

int main()
{
    // int a, b;
    // cin >> a >> b;
    // cout << "Ans is:  " << Pow(a, b);
    string s = "i";
    cout<<s.size();
    return 0;
}