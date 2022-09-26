#include <iostream>
#include <climits>
#include<string.h>
using namespace std;

struct stack
{
    int size;
    int top;
    char *arr;
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

int  push(struct stack *ptr, char value)
{
    if (isFull(ptr))
    {
        cout << " stack overflow " << endl;
        return -1;
    }
    ptr->top++;
    ptr->arr[ptr->top] = value;
    // return value;
}

int pop(struct stack *ptr)
{
    if (isEmpty(ptr))
    {
        cout << "stack underflow  " << endl;
        return -1;
    }
    char val = ptr->arr[ptr->top];
    ptr->top--;
    return val;
}

bool parenthesisMatch(string exp)
{
    // creating stack 
    struct stack *s;
    s = (struct stack *)malloc(sizeof(struct stack));
    s->size = 100;
    s->top = -1;
    s->arr = (char *)malloc(s->size* sizeof(char));
    
    // Main operations
    for (int i = 0; i<exp.length(); i++)
    {   
        if (exp[i]=='(')
        {
            push(s,'(');
        }
        else if (exp[i]==')')
        {
            if (isEmpty(s))
            {
                return false;
            }
            pop(s);
        }
    }
    return isEmpty(s);
}

int main()
{

    string exp = "1+2(3*4)((()))";
    if (parenthesisMatch(exp))
    {
        cout<<"Parenthesis matched "<<endl;
    }
    else{
        cout<<"Parenthesis not matched "<<endl;

    }
    
    return 0;
}