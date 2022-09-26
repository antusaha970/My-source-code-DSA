#include <iostream>
using namespace std;

//   Definition for singly-linked list.
struct ListNode
{
    int val;
    struct ListNode *next;
};

struct ListNode *deleteMiddle(struct ListNode *head)
{
    struct ListNode*p = head;
    struct ListNode*q = head;
    struct ListNode*k;
    int count = 0;
    while (p!=NULL)
    {
        p = p->next;
        count++;
    }
    if (count==1)
    {
        head = NULL;
        return head;
    }
    
    if (count<=2)
    {
       k = q->next;
       q->next = k->next;
       free(k);
       return head;
        
    }
    
    int middle = count /2;
    int i = 0;
    while (i!=middle-1)
    {
        q = q->next;
        i++;
    }
    k = q->next;
    q->next = k->next;
    free(k);
    return head;

}

int main()
{

    return 0;
}