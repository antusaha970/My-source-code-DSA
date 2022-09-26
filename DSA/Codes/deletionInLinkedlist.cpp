#include <iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
};

void dispaly(struct Node *ptr)
{
    while (ptr != NULL)
    {
        cout << ptr->data << " ";
        ptr = ptr->next;
    }
    cout << endl;
}

struct Node *deleteHead(struct Node *head)
{
    struct Node *ptr = head;
    head = ptr->next;
    free(ptr);
    return head;
}

struct Node *deleteBetween(struct Node *head, int index)
{
    struct Node *ptr = head;
    struct Node *p;
    int i = 0;
    while (i != index - 1)
    {
        ptr = ptr->next;
        i++;
    }
    p = ptr->next;
    ptr->next = p->next;
    free(p);
    return head;
}

struct Node *deleteEnd(struct Node *head, int size)
{
    struct Node *p = head;
    struct Node *q = head;
    int i = 0;
    while (i != size - 1)
    {
        /* code */
        q = q->next;
        i++;
    }
    // cout<<q->data<<endl;
    while (p->next != NULL)
    {
        p = p->next;
    }
    // cout<<p->data<<endl;
    q->next = p->next;
    free(p);
    return head;
}

struct Node *deleteGivenvalue(struct Node *head, int given)
{
    struct Node *p = head;
    struct Node *q = head->next;
    while (q->data != given && q->next != NULL)
    {
        q = q->next;
        p = p->next;
    }
    if (q->data == given)
    {
        p->next = q->next;
        free(q);
    }

    return head;
}

int main()
{
    struct Node *head;
    struct Node *f1;
    struct Node *f2;
    struct Node *f3;

    head = (struct Node *)malloc(sizeof(struct Node));
    f1 = (struct Node *)malloc(sizeof(struct Node));
    f2 = (struct Node *)malloc(sizeof(struct Node));
    f3 = (struct Node *)malloc(sizeof(struct Node));

    head->data = 1;
    head->next = f1;

    f1->data = 2;
    f1->next = f2;

    f2->data = 3;
    f2->next = f3;

    f3->data = 4;
    f3->next = NULL;

    dispaly(head);
    // head = deleteHead(head);
    // head = deleteBetween(head,1);
    // head = deleteEnd(head,3);
    head = deleteGivenvalue(head,3);
    dispaly(head);
    return 0;
}