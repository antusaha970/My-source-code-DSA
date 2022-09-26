#include <iostream>
using namespace std;

struct queue
{
    int front;
    int back;
    int size;
    int *arr;
};

bool isEmpty(struct queue *q)
{
    if (q->front == q->back)
    {
        return true;
    }
    return false;
}

bool isFull(struct queue *q)
{
    if (((q->back + 1) % q->size) == q->front)
    {
        return true;
    }
    return false;
}

void enqueue(struct queue *q, int val){
    if (isFull(q))
    {
        cout<<"queue is overflowed"<<endl;
    }
    else{
        q->back = ((q->back+1)%q->size);
        q->arr[q->back]= val;
    }
    
}

int dequeue(struct queue*q){
    int val = -1;
    if (isEmpty(q))
    {
        cout<<"queue is empty"<<endl;
    }
    else{
        q->front = ((q->front+1)%q->size);
        val = q->arr[q->front];
    }
    return val;
}


int main()
{
    struct queue *q;
    q = (struct queue *)malloc(sizeof(struct queue));
    q->back = 0;
    q->front = 0;
    q->size = 4;
    q->arr = (int *)malloc(sizeof(int) * q->size);
    enqueue(q,1);
    enqueue(q,2);
    enqueue(q,3);
    int a = dequeue(q);
    int b = dequeue(q);
    int c = dequeue(q);
    cout<<a<<endl;
    cout<<b<<endl;
    cout<<c<<endl;
    enqueue(q,5);
    cout<<"queue full funcation:  "<<isFull(q)<<endl;
    cout<<"queue empty funcation:  "<<isEmpty(q)<<endl;

    return 0;
}