#include <iostream>
using namespace std;

struct ListNode
{
    int val;
    struct ListNode *next;
};

struct ListNode *removeElements(struct ListNode *head, int val)
{
    struct ListNode* p = head;
    struct ListNode* q = head;
    int i = 0;
    while (p!=NULL)
    {
        if (p->val==val && i ==0)
        {
           head = p->next;
           i--;
        }
        if (p->val==val)
        {
            while (q->next!=p && p->next != NULL)
            {
                q = q->next;
            }
            q->next =p->next;
        }
        p = p->next;
        i++;
    }
    return head;
    
}

int main()
{

    return 0;
}