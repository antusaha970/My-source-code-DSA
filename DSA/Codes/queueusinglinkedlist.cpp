#include <iostream>
using namespace std;

struct Node
{
    int value;
    struct Node *next;
};

void traVersal(struct Node *ptr){
    struct Node *nptr = ptr;
    while (nptr!=NULL)
    {
        cout<<nptr->value<<endl;
        nptr = nptr->next;
    }
    cout<<endl;
    
}

struct Node *front = NULL;
struct Node *rear = NULL;

void enQueue(int val)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    if (newNode == NULL)
    {
        cout<<"queue if fulled"<<endl;
    }
    else
    {
        newNode->value = val;
        newNode->next = NULL;
        if (front == NULL)
        {
            front = newNode;
            rear = newNode;
        }
        else
        {
            rear->next = newNode;
            rear = newNode;
        }
    }
}

int deQueue(void)
{
    int val = -1;
    if (front == NULL)
    {
        return val;
    }
    else
    {
        struct Node *ptr;
        ptr = front;
        front = front->next;
        val = ptr->value;
        free(ptr);
    }
    return val;
}

int main()
{


    enQueue(1);
    enQueue(2);
    enQueue(3);
    enQueue(4);
    traVersal(front);
    // cout<<rear->value<<endl;
    cout << "dequeuing elements " << deQueue() << endl;
    cout << "dequeuing elements " << deQueue() << endl;
    cout << "dequeuing elements " << deQueue() << endl;
    // traVersal(front);
    cout << "dequeuing elements " << deQueue() << endl;


    return 0;
}