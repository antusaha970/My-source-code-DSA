#include <iostream>
using namespace std;

struct node
{
    int data;
    struct node *left;
    struct node *right;
};

struct node *createNode(int data)
{
    // function for creating a node
    struct node *n = (struct node *)malloc(sizeof(struct node));
    n->data = data;
    n->left = NULL;
    n->right = NULL;
    return n;
}

int main()
{
    // creating the nodes
    struct node *root = createNode(7);
    struct node *p1 = createNode(8);
    struct node *p2 = createNode(9);
    struct node *p3 = createNode(1);
    struct node *p4 = createNode(2);
    struct node *p5 = createNode(3);
    // now linking the nodes 

    root->left = p1;
    root->right = p2;
    p1->left = p3;
    p2->left = p4;
    p2->right = p5;

    return 0;
}