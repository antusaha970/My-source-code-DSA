#include <iostream>
using namespace std;

typedef struct queue
{
    int front;
    int rear;
    int *arr;
    int size;
} queue;

bool isFull(queue *ptr)
{
    if (ptr->rear == ptr->size - 1)
    {
        return true;
    }

    return false;
}

bool isEmpty(queue *ptr)
{
    if (ptr->front == ptr->rear)
    {
        return true;
    }

    return false;
}

void enqueue(queue *ptr, int val)
{
    if (isFull(ptr))
    {
        cout << "Queue overflowed " << endl;
    }
    else
    {
        ptr->rear++;
        ptr->arr[ptr->rear] = val;
    }
}

int dequeue(queue *ptr)
{
    int a = -1;
    if (!isEmpty(ptr))
    {
        ptr->front++;
        a = ptr->arr[ptr->front];
    }

    return a;
}

queue *createQueue(queue *ptr, int size)
{
    ptr = (queue *)malloc(sizeof(struct queue));
    ptr->size = size;
    ptr->front = -1;
    ptr->rear = -1;
    ptr->arr = (int *)malloc(sizeof(int) * ptr->size);
    return ptr;
}

int main()
{
    queue *q;
    q = createQueue(q, 3);
    // cout<<isEmpty(q)<<endl;
    enqueue(q, 1);
    enqueue(q, 2);
    enqueue(q, 3);
    // cout<<isFull(q)<<endl;
    cout<<1%5<<endl;
  


    return 0;
}