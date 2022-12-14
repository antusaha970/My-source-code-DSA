#include <iostream>
using namespace std;


// You must know the circular increment thory for Better understand ment
typedef struct
{
    int front;
    int back;
    int size;
    int *arr;

} MyCircularQueue;

bool myCircularQueueIsEmpty(MyCircularQueue *obj)
{
    if (obj->front == obj->back)
    {
        return true;
    }
    return false;
}

bool myCircularQueueIsFull(MyCircularQueue *obj)
{
    if ((obj->back + 1) % obj->size == obj->front)
    {
        return true;
    }

    return false;
}

MyCircularQueue *myCircularQueueCreate(int k)
{
    MyCircularQueue *q;
    q = (MyCircularQueue *)malloc(sizeof(MyCircularQueue));
    q->front = 0;
    q->back = 0;
    q->size = k + 1;
    q->arr = (int *)malloc(sizeof(int) * q->size);
    return q;
}

bool myCircularQueueEnQueue(MyCircularQueue *obj, int value)
{
    if (myCircularQueueIsFull(obj))
    {
        return false;
    }
    obj->arr[obj->back] = value;
    obj->back = (obj->back + 1) % obj->size;
    return true;
}

bool myCircularQueueDeQueue(MyCircularQueue *obj)
{
    if (myCircularQueueIsEmpty(obj))
    {
        return false;
    }
    obj->front = (obj->front + 1) % obj->size;
    return true;
}

int myCircularQueueFront(MyCircularQueue *obj)
{
    if (myCircularQueueIsEmpty(obj))
    {
        return -1;
    }
    return obj->arr[obj->front];
}

int myCircularQueueRear(MyCircularQueue *obj)
{
    if (myCircularQueueIsEmpty(obj))
    {
        return -1;
    }
    return obj->arr[((obj->back-1)+obj->size)%obj->size];
}

void myCircularQueueFree(MyCircularQueue *obj)
{
    free(obj->arr);
    free(obj);
}

int main()
{

    return 0;
}