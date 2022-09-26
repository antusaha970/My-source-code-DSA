#include<iostream>

using namespace std;

struct node
{
    int data;
    struct node*left;
    struct node*right;
};

struct node*createNode(int data){
    struct node *nd = (struct node*)malloc(sizeof(struct node));
    nd->data =data;
    nd->left = NULL;
    nd->right = NULL;
    return nd;
}

void preOderTraversal(struct node*root){
    if(root!=NULL){
        cout<<root->data<<" ";
        preOderTraversal(root->left);
        preOderTraversal(root->right);
    }
}

int main()
{
    struct node * root  = createNode(7);
    struct node * p1  =   createNode(8);
    struct node * p2  =   createNode(9);
    struct node * p3  =   createNode(1);
    struct node * p4  =   createNode(2);
    struct node * p5  =   createNode(3);
    struct node * p6  =   createNode(4);
    struct node * p7  =   createNode(5);
    struct node * p8  =   createNode(6);

    // linking part
    root->left = p1;
    root->right = p2;
    p1->left = p3;
    p1->right = p4;
    p4->right = p7;
    p2->left = p5;
    p2->right= p6;
    p5->right = p8;

    preOderTraversal(root);

    return 0;
}