#include <iostream>
using namespace std;

typedef struct
{
    int size;
    int top;
    int arr[1001];
} CustomStack;

CustomStack *customStackCreate(int maxSize)
{
    CustomStack *obj = (CustomStack *)calloc(1,sizeof(CustomStack));
    obj->size = maxSize;
    return obj;
}

void customStackPush(CustomStack *obj, int x)
{
    if (obj->top == obj->size)
    {
        return;
    }

   obj->arr[obj->top] = x;
   obj->top++;
}

int customStackPop(CustomStack *obj)
{
    if (obj->top == 0)
    {
        return -1;
    }

    int tmp = obj->arr[(obj->top)-1];
    obj->top--;
    return tmp;
}

void customStackIncrement(CustomStack *obj, int k, int val)
{
    int end = min(k,obj->size);
    for (int i = 0; i < end; i++)
    {
        obj->arr[i] += val;
    }
}

void customStackFree(CustomStack *obj)
{
    free(obj);
}

int main()
{

    return 0;
}