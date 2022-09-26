#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

void displayNodes(struct node *ptr){
    while (ptr!= NULL)
    {
        printf("%d\n",ptr->data);
        ptr = ptr->next;    
    }
    
}


int main(){

    struct node *head;
    struct node *frist;
    struct node *second;
    // struct node *third;
    // struct node *forth;
    head = (struct node*)malloc(sizeof(struct node));
    frist = (struct node*)malloc(sizeof(struct node));
    second = (struct node*)malloc(sizeof(struct node));
    head->data = 10;
    head->next = frist;

    frist->data = 20;
    frist->next = second;

    second->data= 30;
    second->next= NULL;

    displayNodes(second);
    
    return 0;
}