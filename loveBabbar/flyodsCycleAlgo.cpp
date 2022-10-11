#include<iostream>
#include<climits>
#include<map>
using namespace std;

struct Node
{
    int val;
    struct Node*next;
};

void print(Node*head){
    while (head!=NULL)
    {
        cout<<head->val<<" ";
        head = head->next;
    }
    
}

Node* decetecLoop(Node* head){
    if(head == NULL)
        return head;
    Node * slow = head;
    Node * fast = head;
    while(fast!=NULL && slow!=NULL){
        fast = fast->next;
        if(fast!=NULL)
            fast = fast->next;
        slow = slow->next;
        if(slow==fast)
            return slow;
    }
    return NULL;
}

Node* startingPoint(Node*head){
    if(head==NULL)
        return head;
    Node* intersection = decetecLoop(head);
    Node *slow = head;
    while(slow!=intersection){
        slow = slow->next;
        intersection = intersection->next;
    }
    return slow;
}


void removeLoop(Node*head){
    Node* loopStart = startingPoint(head);
    Node* tmp = loopStart->next;
    while (tmp->next!=loopStart)
    {
        tmp = tmp->next;
    }
    tmp->next = NULL;
    return;
}


int main()
{
    Node *head = new Node ;
    Node *l1 = new Node ;
    Node *l2 = new Node ;
    Node *l3 = new Node ;
    head->val = 1;
    l1->val = 2;
    l2->val = 3;
    l3->val = 4;
    head->next = l1;
    l1->next = l2;
    l2->next = l3;
    l3->next = l2;
    removeLoop(head);
    print(head);

    return 0;
}