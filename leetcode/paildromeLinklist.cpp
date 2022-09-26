#include<iostream>
#include<vector>
#include<algorithm>
// #include <bits/stdc++.h>
using namespace std;

struct ListNode
{
    int val;
    struct ListNode *next;
};

bool isPalindrome(struct ListNode* head){
    vector<int> arr;
    while (head!=NULL)
    {
        arr.push_back(head->val);
        head = head->next;
    }
    vector<int> arr2;
    arr2 = arr;
    reverse(arr.begin(),arr.end());
    if (arr==arr2)
    {
        return true;
    }
    return false;
    


   
    
    
    
}

int main()
{
    vector<int> arr = {1,2,1};
    vector<int>arr2 = {1,2,3};
    if (arr==arr2)
    {
        cout<<"yes";
    }
    
    return 0;
}