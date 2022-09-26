#include<iostream>
#include<climits>
using namespace std;

struct ListNode
{
    int val;
    struct ListNode *next;
};

bool hasCycle(struct ListNode *head) {
    if (head==NULL)
    {
        return false;
    }
    while (head->next!=NULL)
    {
        head->val = INT_MAX;
        head = head->next;
        if (head->val==INT_MAX)
        {
            return true;
        }
    }
    return false;
    
    
    
    
}


int main()
{
    
    return 0;
}