#include <iostream>
#include <vector>
using namespace std;

int fristHalfSearch(vector<int> nums){
    int mid,start,end, ans = -1;
    start = 0 ;
    end = nums.size() -1;
    while (start<=end)
    {
        mid = (start+end) / 2;
        if(nums[mid]==nums[mid+1] || nums[mid] == nums[mid-1]){
            end = mid-1;
        }
        else{
            ans = nums[mid];
        }
    }
    return ans;
    
}


int singleNonDuplicate(vector<int> &nums)
{
    int start,end,mid,fristHalf;
    start = 0;
    end = nums.size() -1;
    mid = (start+end) / 2;
    fristHalf = fristHalfSearch(nums);

}

int main()
{
    vector<int> arr = {1,1, 2,3, 3};
    cout<<"hl"<<endl;
    cout<<fristHalfSearch(arr);
    return 0;
}