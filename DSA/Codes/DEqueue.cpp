// Double ended queue
#include <iostream>
using namespace std;

struct queue
{
    int front;
    int rear;
    int size;
    int *arr;
};

bool isFull(struct queue *ptr)
{
    if (ptr->rear == ptr->size - 1)
        return true;
    return false;
}

bool isEmpty(struct queue *ptr)
{
    if (ptr->front == ptr->rear)
        return true;
    return false;
}

void enqueueRear(struct queue *ptr, int val)
{
    if (isFull(ptr))
    {
        cout << "queue is full" << endl;
    }
    else
    {
        ptr->rear++;
        ptr->arr[ptr->rear] = val;
    }
}
void enqueueFront(struct queue *ptr, int val)
{
    if (ptr->front == -1)
    {
        cout << "queue is full" << endl;
    }
    else
    {
        ptr->arr[ptr->front] = val;
        ptr->front--;
    }
}

int dequeueFront(struct queue *ptr)
{
    int val = -1;
    if (isEmpty(ptr))
        cout << "queue is empty not avail to dequeue" << endl;
    else
    {
        ptr->front++;
        val = ptr->arr[ptr->front];
    }
    return val;
}

int dequeueRear(struct queue *ptr)
{
    int val = -1;
    if (isEmpty(ptr))
        cout << "queue is empty not avail to dequeue" << endl;
    else
    {
        val = ptr->arr[ptr->rear];
        ptr->rear--;
    }
    return val;
}

int main()
{
    struct queue *q;
    q = (struct queue *)malloc(sizeof(struct queue));
    q->front = -1;
    q->rear = -1;
    q->size = 5;
    q->arr = (int *)malloc(sizeof(int) * q->size);
    enqueueRear(q, 1);
    enqueueRear(q, 2);
    enqueueRear(q, 3);
    enqueueRear(q, 4);
    enqueueRear(q, 5);

    cout << "dequeuefront funcation:  " << dequeueFront(q) << endl;
    cout << "dequeuefront funcation:  " << dequeueFront(q) << endl;
    cout << "dequeue Rear funcation:  " << dequeueRear(q) << endl;
    cout << "dequeue Rear funcation:  " << dequeueRear(q) << endl;
    enqueueFront(q, 6);
    enqueueFront(q, 7);
    cout << "dequeuefront funcation:  " << dequeueFront(q) << endl;
    cout << "dequeuefront funcation:  " << dequeueFront(q) << endl;
    cout << "is empty function: " << isEmpty(q) << endl;
    cout << "is full function: " << isFull(q) << endl;

    return 0;
}