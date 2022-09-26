#include <iostream>
using namespace std;

struct stack
{
    int size;
    int top;
    int *arr;
};

bool isEmpty(struct stack *ptr)
{
    if (ptr->top == -1)
    {
        return true;
    }
    return false;
}

bool isFull(struct stack *ptr)
{
    if (ptr->top >= ptr->size - 1)
    {
        return true;
    }
    return false;
}

int push(struct stack *ptr,int value){
    if (isFull(ptr))
    {
        cout<<"stack overflow "<<endl;
        return -1;
    }
    ptr->top++;
    ptr->arr[ptr->top] = value;
    return value;
    
}

int pop(struct stack *ptr){
    if(isEmpty(ptr)){
        cout<<"stack underflow"<<endl;
        return -1;
    }
    ptr->top--;

}

int peek(struct stack *ptr,int index){
    if (ptr->top-index+1<0)
    {
        return -1;
    }
    return ptr->arr[ptr->top-index+1];
    
}

int main()
{
    struct stack *stk;
    stk = (struct stack *)malloc(sizeof(struct stack));

    stk->size = 50;
    stk->top = -1;
    stk->arr = (int *)malloc(stk->size * sizeof(int));
    push(stk,1);
    push(stk,2);
    push(stk,3);
    // push(stk,4);
    for (int  i = 1; i <= stk->top+1; i++)
    {
        cout<<"Peeking element at "<<i<<": "<<peek(stk,i)<<endl;
    }
    
    // cout << "is full: "<<isFull(stk) << endl;
    // cout << "is empty: "<<isEmpty(stk) << endl;

    return 0;
}