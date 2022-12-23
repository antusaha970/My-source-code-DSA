#include<iostream>
using namespace std;

class Node {

    public:
    int data;
    Node* next;

    //constructor
    Node(int data) {
        this -> data = data;
        this -> next = NULL;
    }

    //destructor
    ~Node() {
        int value = this -> data;
        //memory free
        if(this->next != NULL) {
            delete next;
            this->next = NULL;
        }
        cout << " memory is free for node with data " << value << endl;
    }

};

void insertHead(Node* &head,int value){
    Node* tmp = new Node(value);
    tmp->next = head;
    head = tmp;
}

void insertAtTail(Node* &tail,int value){
    Node* tmp = new Node(value);
    tail->next = tmp;
    tail = tail->next;
}

void printLL(Node* head){
    Node* tmp = head;
    while(tmp != NULL){
        cout<<tmp ->data<<" ";
        tmp = tmp->next;
    }
}

int main()
{
    //created a new node
    Node* node1 = new Node(10);
    //cout << node1 -> data << endl;
   // cout << node1 -> next << endl;
    
    //head pointed to node1
    Node* head = node1; 
    Node* tail = node1;
    //print(head);

    insertAtTail(tail, 12);

    //print(head);
    
    insertAtTail(tail, 15);
    //print(head);
    printLL(head);
    return 0;
}