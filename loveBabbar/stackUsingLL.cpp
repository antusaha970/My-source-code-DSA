#include<iostream>
using namespace std;
class Node{
    public:
        int data;
        Node* next;
    Node(int data){
        this -> data = data;
        next = NULL;
    }
};

class stack{
    private:
    Node* top = NULL;
    public:
    

    //Functions
    stack(){
        Node* top = NULL;
    }
    void push(int value){
        //First create new node 
        Node * ptr = new Node(value);
        if(!ptr)
        {
            cout<< "Stack overflow "<<endl;
            return;
        }
        else{
            ptr->next = top;
            top = ptr;
        }
    }

    void pop(void){
        if(top!=NULL){
            Node* tmp = top;
            top = top ->next;
            delete(tmp);
        }
        else{
            cout<<"stack underflow";
            return;
        }
    }

    bool isEmpty(void){

        if(top==NULL)
            return true;
        else
            return false;

    }

    int peek(void){
        if(top!=NULL){
            return top->data;
        }
        else{
            return -1;
        }
    }

};



int main()
{
    int s= 8;
    char j = '0'+1+1+1+1+1; 
    cout<<j;

    
    return 0;
}