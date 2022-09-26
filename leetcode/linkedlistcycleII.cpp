#include <iostream>
#include <climits>
using namespace std;

struct ListNode
{
    int val;
    struct ListNode *next;
};

struct ListNode *detectCycle(struct ListNode *head)
{
    if (head == NULL)
    {
        return NULL;
    }

    struct ListNode *p = head;
    while (p->next != NULL)
    {
        p->val = INT_MAX;
        p = p->next;
        if (p->val == INT_MAX)
        {
            return p;
        }
    }
    return NULL;
}

int main()
{

    return 0;
}