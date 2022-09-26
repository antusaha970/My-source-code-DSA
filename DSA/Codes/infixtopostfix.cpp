#include <iostream>
#include <string.h>
using namespace std;

struct stack
{
    int size;
    int top;
    char *arr;
};

int stackTop(struct stack *sp)
{
    return sp->arr[sp->top];
}

int isEmpty(struct stack *ptr)
{
    if (ptr->top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isFull(struct stack *ptr)
{
    if (ptr->top == ptr->size - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void push(struct stack *ptr, char val)
{
    if (isFull(ptr))
    {
        printf("Stack Overflow! Cannot push %d to the stack\n", val);
    }
    else
    {
        ptr->top++;
        ptr->arr[ptr->top] = val;
    }
}

char pop(struct stack *ptr)
{
    if (isEmpty(ptr))
    {
        printf("Stack Underflow! Cannot pop from the stack\n");
        return -1;
    }
    else
    {
        char val = ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }
}

bool isOperator(char ch)
{
    if (ch == '+' || ch == '-' || ch == '*' || ch == '/')
        return true;
    else
        return false;
}

int precedence(char ch)
{
    if (ch == '+' || ch == '-')
        return 1;
    else if (ch == '*' || ch == '/')
    {
        return 2;
    }
    return 0;
}

char *infixToPostfix(char *infix)
{
    struct stack *sp = (struct stack *)malloc(sizeof(struct stack));
    sp->top = -1;
    sp->size = 10;
    sp->arr = (char *)malloc(sp->size * sizeof(char));

    char *postfix = (char *)malloc(sizeof(char) * strlen(infix + 1));

    int i = 0; // infix traversal
    int j = 0; // postfix traversal
    while (infix[i] != '\0')
    {
        if (!isOperator(infix[i]))
        {
            postfix[j] = infix[i];
            i++;
            j++;
        }
        else
        {
            if (precedence(infix[i]) > precedence(stackTop(sp)))
            {
                push(sp, infix[i]);
                i++;
            }
            else
            {
                char tmp = pop(sp);
                postfix[j] = tmp;
                j++;
            }
        }
    }
    while (!isEmpty(sp))
    {
        postfix[j] = pop(sp);
        j++;
    }
    postfix[j] = '\0';
    return postfix;
}

int main()
{
    char *infix = "a+b*c+d";
    cout << infixToPostfix(infix);

    return 0;
}