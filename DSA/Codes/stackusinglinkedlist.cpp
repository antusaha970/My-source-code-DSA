#include <iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
};

void traversal(struct Node *ptr)
{
    while (ptr != NULL)
    {
        cout << ptr->data << " ";
        ptr = ptr->next;
    }
    cout << endl;
}

bool isEmpty(struct Node *head)
{
    if (head == NULL)
    {
        return true;
    }
    return false;
}

struct Node * push(struct Node *head,int val){
    struct Node*ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = val;

    ptr->next = head;
    head = ptr;
    return head;
}

int pop(struct Node **head){
    if (isEmpty(*head))
    {
        cout<<"stack underflow"<<endl;
        return -1;
    }
    struct Node *ptr = *head;
    int x = ptr->data;
    *head = ptr->next;
    free(ptr);
    return x;
    
}

void peek(struct Node *head,int ind){
    struct Node *ptr = head;
    int i = 1;
    while (i!=ind && ptr!=NULL)
    {
        ptr = ptr->next;
        i++;
    }
    if (ptr!=NULL)
    {
    cout<<ptr->data<<endl;
        
    }
    else{
        cout<<"invaild input";
    }
    
    
}

int main()
{
    struct Node *head;
    struct Node *p1;
    struct Node *p2;
    struct Node *p3;

    head = (struct Node *)malloc(sizeof(struct Node));
    p1 = (struct Node *)malloc(sizeof(struct Node));
    p2 = (struct Node *)malloc(sizeof(struct Node));
    p3 = (struct Node *)malloc(sizeof(struct Node));

    head->data = 1;
    head->next = p1;

    p1->data = 2;
    p1->next = p2;

    p2->data = 3;
    p2->next = p3;

    p3->data = 4;
    p3->next = NULL;

    // head = push(head,5);
    // head = push(head,6);
    // head = pop(head);
    // head = push(head,8);
    // // head = pop(head);
    cout<<pop(&head)<<endl;
    cout<<pop(&head)<<endl;
    traversal(head);

    // peek(head,5);

    return 0;
}