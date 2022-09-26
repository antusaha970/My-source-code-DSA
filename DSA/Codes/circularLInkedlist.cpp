#include <iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
};

void dispaly(struct Node *head)
{
    struct Node *p = head;
    do
    {
        cout<<p->data<<" ";
        p = p->next;

    }while (p!=head);
    

    cout << endl;
}

struct Node*insertHead(struct Node*head,int data){
    struct Node*ptr = (struct Node*)malloc(sizeof(struct Node));
    ptr->data = data;

    struct Node*p = head;
    ptr->next = p;
    while (p->next!=head)
    {
        p = p->next;
    }
    p->next = ptr;
    head = ptr;
    return head;
}

struct Node*appendList(struct Node*head,int data){
    struct Node*ptr = (struct Node*)malloc(sizeof(struct Node));
    ptr->data = data;
    struct Node*p = head;
    while (p->next!= head)
    {
        p = p->next;
    }
    p->next = ptr;
    ptr->next = head;
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
    f3->next = head;

    dispaly(head);
    // head = appendList(head,5);
    // head = appendList(head,6);
    head = insertHead(head,10);
    head = insertHead(head,20);
    dispaly(head);
    return 0;
}