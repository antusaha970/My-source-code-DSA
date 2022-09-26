#include <iostream>
using namespace std;

struct ListNode
{
    int val;
    struct ListNode *next;
};

struct ListNode* reverseList(struct ListNode* head){
    struct ListNode*prvptr = NULL;
    struct ListNode*currentptr = head;
    struct ListNode*n;
    while (currentptr!=NULL)
    {
        n = currentptr->next;
        currentptr->next = prvptr;

        prvptr = currentptr;
        currentptr = n;

    }
    free(currentptr);
    free(n);
    return prvptr;
    
}
void Traversal(struct ListNode *head)
{
    struct ListNode *ptr = head;
    do
    {
        cout << ptr->val << " ";
        ptr = ptr->next;
    } while (ptr != head);
    cout << endl;
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
    f3->next = NULL;
    // Traversal(head);
    head = reverseList(head);
    Traversal(head);

    return 0;
}