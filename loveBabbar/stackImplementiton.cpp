#include<iostream>
using namespace std;

class stack{
    public:
    // Propaties 
    int *arr;
    int size;
    int top;

    // Functions
    stack(int size){
        this->size = size;
        top = -1;
        arr = new int[size];
    }

    void push(int num){
        if(isFull()){
            cout<<"Stack overflowed "<<endl;
            return;
        }
        else{
            top++;
            arr[top] = num;
            return;
        }
    }

    void pop(void){
        if(isEmpty()){
            cout<<"Stack underflowed";
            return;
        }
        else{
            top--;
        }
    }
    int topElement(void){
        if(isEmpty()){
            cout<<"Stack underflowed"<<endl;
            return -1;
        }
        else{
            return arr[top];
        }
    }
    int peek(int ind){
        if(ind >size || ind <= -1)
        {
            cout<<"Invalid index"<<endl;
            return -1;
        }
        else{
            return arr[ind-1];
        }
    }

    bool isEmpty(void){
        if(top == -1)
            return true;
        else
            return false;
    }

    bool isFull(void){
        if(top >= size-1)
            return true;
        else
            return false;
    }


};














int main()
{
    stack s(5);
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    cout<<s.topElement()<<endl;
    s.pop();
    s.pop();
    cout<<s.topElement()<<endl;


    return 0;
}