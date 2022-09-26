#include <iostream>
using namespace std;

class MountainArray
{
public:
    int get(int index);
    int length();
};


// We will run three binary search algo here
//     1: from start to end to find peek element
//     2: from start to peek to find frist occurence
//     3: from peek+1 to end to find last occurence
//     then we will return the minimum index of target

int fristOccurance(int low, int peekInd, MountainArray &mountainArr, int target)
{
    int high, mid, ans = -1;
    low = 0;
    high = peekInd;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (mountainArr.get(mid) == target)
        {
            ans = mid;
            return ans;
        }
        if (mountainArr.get(mid) < target)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return ans;
}

int lastOccurance(int peekInd,int  high, MountainArray &mountainArr,int target)
{
    int start, end, middle, ans = -1;
    start = peekInd+1;
    end = high;
    while (start <= end)
    {
        middle = (start + end) / 2;
        if (mountainArr.get(middle) == target)
        {
            ans = middle;
            return ans;
        }
        if (mountainArr.get(middle) > target)
        {
            start = middle + 1;
        }
        else
        {
            end = middle - 1;
        }
    }
    return ans;
}

int peekIndex(int low, int high, MountainArray &mountainArr)
{
    int mid, ans;
    while (low < high)
    {
        mid = (low + high) / 2;
        if (mountainArr.get(mid) < mountainArr.get(mid + 1))
        {
            low = mid + 1;
        }
        else
        {
            high = mid;
        }
    }
    return low;
}

class Solution
{
public:
    int findInMountainArray(int target, MountainArray &mountainArr)
    {
        int low, high, peekInd, fristOcc, lastOcc;
        low = 0;
        high = mountainArr.length() - 1;
        peekInd = peekIndex(low, high, mountainArr);
        fristOcc = fristOccurance(low, peekInd, mountainArr, target);
        lastOcc = lastOccurance(peekInd, high, mountainArr, target);
        if (fristOcc == -1 && lastOcc == -1)
        {
            return -1;
        }
        else if (fristOcc == -1 || lastOcc == -1)
        {
            return max(fristOcc, lastOcc);
        }
        return min(fristOcc, lastOcc);
    }
};

int main()
{

    return 0;
}