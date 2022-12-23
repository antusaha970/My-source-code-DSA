#include<iostream>
using namespace std;

class node {

    public:
    int data;
    node* next;

    //constructor
    node(int data) {
        this -> data = data;
        this -> next = NULL;
    }

    //destructor
    ~node() {
        int value = this -> data;
        //memory free
        if(this->next != NULL) {
            delete next;
            this->next = NULL;
        }
        cout << " memory is free for node with data " << value << endl;
    }

};

void insertAtTail(node* &head, node* &tail,int value){
    struct node* tmp = new node(value);
    if(head == NULL && tail == NULL){
        head = tmp;
        tail = tmp;
    }
    else{
        tail->next = tmp;
        tail = tail->next;
    }
}

void DeleteFirstNode(node* &head){
    node* temp = head;
    head = head->next;
    // delete(temp);
}

void traversing(node* head){
    while(head != NULL){
        cout<<head->data<<" ";
        head = head->next;
    }
}

void firstNodeInsert(node* &head,int val){
    node * temp = new node(val);
    temp->next = head;
    head = temp;
}

int main()
{
    node* head = NULL;
    node* tail = NULL;
    insertAtTail(head,tail,1);
    insertAtTail(head,tail,2);
    insertAtTail(head,tail,3);
    firstNodeInsert(head,60);
    DeleteFirstNode(head);
    DeleteFirstNode(head);
    DeleteFirstNode(head);
    firstNodeInsert(head,50);
    traversing(head);
    return 0;
}