#include <iostream>
#include <vector>
using namespace std;

vector<int> twoSum(vector<int> &numbers, int target)
{
    /*
        We will sum end and start and check if the sum is equal . If equal we will push it in a array and return.
        Else if sum is bigger then target we will decrement end. Else we will increse start.
        !! DRY run this code for better understanding !!
    */
    vector<int> ans;
    int start,end;
    start = 0;
    end = numbers.size() - 1;
    while (start < end)
    {
        if(numbers[start]+numbers[end]==target){
            ans.push_back(start+1);
            ans.push_back(end+1);
            return ans;
        }
        else if (numbers[start]+numbers[end] > target){
            end--;
        }
        else{
            start++;
        }
        
    }
    return ans;
}

int main()
{

    return 0;
}