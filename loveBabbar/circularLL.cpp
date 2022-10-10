#include<iostream>
using namespace std;

struct Node
{
    int val;
    struct Node*next;
};

bool isCircular(Node *head){
    if(head==NULL)
        return true;
    if(head->next==NULL)
        return false;
    
    Node*tmp = head->next;
    while (tmp!=NULL && tmp!=head)
    {
        tmp = tmp->next;
    }
    if (tmp==NULL)
    {
        return false;
    }
    if(tmp==head)
        return true;
}



int main()
{
    Node *head = new Node ;
    Node *l1 = new Node ;
    Node *l2 = new Node ;
    head->val = 1;
    l1->val = 2;
    l2->val = 2;
    head->next = l1;
    l1->next = l2;
    l2->next = head;
    if(isCircular(head))
        cout<<"This is a circular linked list "<<endl;
    else
        cout<<"This is not a circular linked list"<<endl;


    return 0;
}