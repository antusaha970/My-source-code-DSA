#include<iostream>
using namespace std;


struct Node
{
    int data;
    struct Node *next;
};

void display(struct Node *ptr){
    while (ptr!=NULL)
    {
        cout<<ptr->data<<" ";
        ptr = ptr->next;
    }
    cout<<endl;
    
}

struct Node *insertionHead(struct Node *head,int data){
    struct Node* ptr = (struct Node*)malloc(sizeof(struct Node));
    ptr->data = data;
    ptr->next = head;
    return ptr;

}

struct Node *insetBetween(struct Node* head,int data,int index){
    struct Node *ptr = (struct Node*)malloc(sizeof(struct Node));
    struct Node *p = head;
    int i = 0;
    while (i!= index-1)
    {
        p = p->next;
        i++;      
    }
    ptr->data = data;
    ptr->next = p->next;
    p->next = ptr;
    return head;
}


struct Node * insertEnd(struct Node *head,int data){
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = data;

    struct Node *p = head;
    while (p->next!=NULL)
    {
        p = p->next;
    }
    p->next = ptr;
    ptr->next = NULL;
    return head;
    
}

struct Node * insertAt(struct Node*head,struct Node *Given,int data){
    struct Node *ptr = (struct Node*)malloc(sizeof(struct Node));
    ptr->data = data;

    ptr->next = Given->next;
    Given->next = ptr;

    return head;
}

int main()
{
    struct Node *head;
    struct Node *f1;
    struct Node *f2;
    struct Node *f3;

    head = (struct Node*)malloc(sizeof(struct Node));
    f1 = (struct Node*)malloc(sizeof(struct Node));
    f2 = (struct Node*)malloc(sizeof(struct Node));
    f3 = (struct Node*)malloc(sizeof(struct Node));


    head->data =1;
    head->next = f1;

    f1->data = 2;
    f1->next = f2;

    f2->data = 3;
    f2->next= f3;

    f3->data = 4;
    f3->next= NULL;


    display(head);
    // head = insertionHead(head,55);
    head = insetBetween(head,100,3);
    // head = insertEnd (head,66);
    // head = insertAt(head,f3,5);
    display(head);

    return 0;
}