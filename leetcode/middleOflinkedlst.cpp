#include <iostream>
using namespace std;

struct ListNode
{
    int val;
    struct ListNode *next;
};

struct ListNode *middleNode(struct ListNode *head)
{
    int count = 0;
    struct ListNode*p = head;
    struct ListNode*q = head;
    while (p!=NULL)
    {
        p = p->next ;
        count++;
    }
    if (count<=1)
    {
        return head;
    }
    
    int middle = count/2;
    int i = 0;
    while (i!=middle-1)
    {
        q = q->next;
        i++;
    }
    return q->next;
    
}
int main()
{
    struct ListNode *head;
    struct ListNode *f1;
    struct ListNode *f2;
    struct ListNode *f3;
    struct ListNode *f4;

    head = (struct ListNode *)malloc(sizeof(struct ListNode));
    f1 = (struct ListNode *)malloc(sizeof(struct ListNode));
    f2 = (struct ListNode *)malloc(sizeof(struct ListNode));
    f3 = (struct ListNode *)malloc(sizeof(struct ListNode));
    f4 = (struct ListNode *)malloc(sizeof(struct ListNode));

    head->val = 1;
    head->next = f1;

    f1->val = 2;
    f1->next = f2;

    f2->val = 3;
    f2->next = f3;

    f3->val = 4;
    f3->next = f4;
    f4->next = NULL;
    middleNode(head);
    return 0;
}