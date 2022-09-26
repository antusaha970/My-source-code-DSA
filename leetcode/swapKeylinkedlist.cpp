#include<iostream>
using namespace std;

struct ListNode
{
    int val;
    struct ListNode *next;
};

struct ListNode* swapNodes(struct ListNode* head, int k){
    struct ListNode*p = head;
    struct ListNode*q = head;
    struct ListNode*k = head;
    int i = 0;
    while (i!=k-1)
    {
        p = p->next;
        i++;
    }
    while (q->next !=NULL && k-next!=NULL)
    {
        q = q->next;
        k = k->next;
    }
    q->next = p->next;
    q->val = p->val;
    p->next = 


    
    
    
}

int main()
{
    
    return 0;
}