#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node*left;
    struct node*right;
};

struct node* createNode(int data){
    struct node*n = new node;
    n->data = data;
    n->left = NULL;
    n->right = NULL;
    return n;
}
void preOrderTraversal(struct node*root){
    if(root!=NULL){
        cout<<root->data<<" ";
        preOrderTraversal(root->left);
        preOrderTraversal(root->right);
    }
}

void postOrderTraversal(struct node*root){
    if(root!=NULL){
        postOrderTraversal(root->left);
        postOrderTraversal(root->right);
        cout<<root->data<<" ";
    }
}

void inOrderTraversal(struct node*root){
    if(root!=NULL){
        inOrderTraversal(root->left);
        cout<<root->data<<" ";
        inOrderTraversal(root->right);
    }
}

int main()
{

    struct node * root =  createNode(10);
    struct node * p1  =   createNode(5);
    struct node * p2  =   createNode(2);
    struct node * p3  =   createNode(6);
    struct node * p4  =   createNode(15);
    struct node * p6  =   createNode(20);
    root->left = p1;
    p1->left = p2;
    p1->right = p3;
    root->right = p4;
    p4->right = p6;
    inOrderTraversal(root);

    return 0;
}