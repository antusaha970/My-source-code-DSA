#include<iostream>
using namespace std;

struct Node
{
    int data;
    struct Node*prev;
    struct Node*next;

};

void traverSal(struct Node*head,struct Node*last){
    struct Node*p = head;
    while (p!=NULL)
    {
        cout<<p->data<<" ";
        p = p->next;
    }
    cout<<endl;
    while (last!=NULL)
    {
        cout<<last->data<<" ";
        last = last->prev;
    }
    
   
    cout<<endl;
    
}


int main()
{
    struct Node*head;
    struct Node*e1;
    struct Node*e2;
    struct Node*e3;

    head = (struct Node*)malloc(sizeof(struct Node));
    e1 = (struct Node*)malloc(sizeof(struct Node));
    e2 = (struct Node*)malloc(sizeof(struct Node));
    e3 = (struct Node*)malloc(sizeof(struct Node));

    head->data = 1;
    e1->data = 2;
    e2->data = 3;
    e3->data = 4;

    head->next = e1;
    e1->next = e2;
    e2->next = e3;
    e3->next = NULL;

    e3->prev = e2;
    e2->prev = e1;
    e1->prev = head;
    head->prev = NULL;

    traverSal(head,e3);

    return 0;
}