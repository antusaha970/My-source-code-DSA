#include<iostream>
#include<climits>
#include<map>
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

bool isCircularV2(Node *head){
    if(head==NULL)
        return true;
    if(head->next==NULL)
        return false;
    
    Node*tmp = head->next;
    while (tmp!=NULL && tmp!=head && tmp->val!=INT_MIN)
    {
        tmp = tmp->next;
        tmp->val = INT_MIN;

    }
    if (tmp->val==INT_MIN)
    {
        return true;
    }
    else if (tmp==NULL)
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
    l2->next = l1;
    map<Node*,bool>m;
    cout<<m[head]<<endl;
    if(isCircularV2(head))
        cout<<"This is a circular linked list "<<endl;
    else
        cout<<"This is not a circular linked list"<<endl;


    return 0;
}