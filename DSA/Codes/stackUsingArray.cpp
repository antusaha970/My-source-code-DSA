#include <iostream>
#include <climits>
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

int push(struct stack *ptr, int value)
{
    if (isFull(ptr))
    {
        cout << " stack overflow " << endl;
        return -1;
    }
    ptr->top++;
    ptr->arr[ptr->top] = value;
    return value;
}

int pop(struct stack *ptr)
{
    if (isEmpty(ptr))
    {
        cout << "stack underflow  " << endl;
        return -1;
    }
    int val = ptr->arr[ptr->top];
    ptr->top--;
    return val;
}

int main()
{
    struct stack *s;
    s = (struct stack *)malloc(sizeof(struct stack));

    s->size = 5;
    s->top = -1;
    s->arr = (int *)malloc(sizeof(int));

    push(s,1);
    push(s,2);
    push(s,3);
    push(s,4);
    push(s,5);
    pop(s);
    pop(s);
    pop(s);
    push(s,10);
    push(s,10);
    push(s,10);
    cout<<s->arr[s->top]<<endl;

    cout <<"is empty: "<< isEmpty(s) << endl;
    cout <<"is full: "<< isFull(s) << endl;
    return 0;
}