#include <iostream>
using namespace std;

struct ListNode
{
    int val;
    struct ListNode *next;
};

struct ListNode *reverseBetween(struct ListNode *head, int left, int right)
{
    struct ListNode*currentptr = head;
    struct ListNode*nextptr;
    struct ListNode*prvptr;
    while (currentptr->val!=left)
    {
        currentptr = currentptr->next;
    }
    nextptr = currentptr->next;
    prvptr = currentptr;
    while (nextptr->val!=right)
    {
        nextptr->val = currentptr->val;
        currentptr = nextptr;
        
    }
    
    
}

int main()
{

    return 0;
}