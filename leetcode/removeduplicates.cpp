#include <iostream>
using namespace std;

struct ListNode
{
    int val;
    struct ListNode *next;
};

struct ListNode *deleteDuplicates(struct ListNode *head)
{
    if (head==NULL)
    {
        return head;
    }
    
    struct ListNode *currentptr = head;
    while (currentptr->next != NULL)
    {
        if (currentptr->val == currentptr->next->val)
        {
            struct ListNode *tmp = currentptr->next;
            currentptr->next = tmp->next;
            delete (tmp);
        }
        else
        {
            currentptr = currentptr->next;
        }
    }
    return head;
}

int main()
{

    return 0;
}