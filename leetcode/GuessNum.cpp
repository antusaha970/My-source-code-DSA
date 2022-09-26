#include <iostream>
using namespace std;

int guess(int num);

int guessNumber(int n)
{
    // for understanding the code you must have the knowledge of binary search
    long long low, high, mid, rightNum;
    low = 1;
    high = n;
    while (low <= high)
    {
        mid = (low + high) / 2;
        rightNum = guess(mid);
        if (rightNum == 0)
        {
            return mid;
        }
        if (rightNum == 1)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return mid;
}

int main()
{

    return 0;
}