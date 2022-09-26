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
    struct node *n = new node;
    n->data = data;
    n->left = NULL;
    n->right = NULL;
    return n;
}
void preOrderTraversal(struct node *root)
{
    if (root != NULL)
    {
        cout << root->data << " ";
        preOrderTraversal(root->left);
        preOrderTraversal(root->right);
    }
}

void postOrderTraversal(struct node *root)
{
    if (root != NULL)
    {
        postOrderTraversal(root->left);
        postOrderTraversal(root->right);
        cout << root->data << " ";
    }
}

void inOrderTraversal(struct node *root)
{
    if (root != NULL)
    {
        inOrderTraversal(root->left);
        cout << root->data << " ";
        inOrderTraversal(root->right);
    }
}

bool isBST(struct node *root)
{
    static struct node *prev = NULL;
    if (root != NULL)
    {
        if (!isBST(root->left))
        {
            return false;
        }
        if (prev != NULL && root->data <= prev->data)
        {
            return false;
        }
        prev = root;
        return isBST(root->right);
    }
    else
    {
        return true;
    }
}

struct node *searchNode(struct node *root, int target)
{
    if (root == NULL)
    {
        return NULL;
    }
    if (root->data == target)
    {
        return root;
    }
    else if (root->data > target)
    {
        searchNode(root->left, target);
    }
    else
    {
        searchNode(root->right, target);
    }
}

void insertBST(struct node *root, int key)
{
    struct node *prev = NULL;
    while (root != NULL)
    {
        prev = root;
        if (root->data == key)
            return;
        else if (root->data < key)
            root = root->right;
        else
            root = root->left;
    }
    struct node *newNode = createNode(key);
    if (prev->data > key)
        prev->left = newNode;
    else
        prev->right = newNode;
}

int main()
{

    // struct node *root = createNode(10);
    // struct node *p1 = createNode(5);
    // struct node *p2 = createNode(18);
    // root->left = p1;
    // root->right = p2;
    // struct node* n = searchNode(root,1);
    // cout<<n->data<<endl;
    // // inOrderTraversal(root);
    // // cout<<endl;
    // // cout<<isBST(root);

    struct node *root = createNode(10);
    struct node *p1 = createNode(5);
    struct node *p2 = createNode(2);
    struct node *p3 = createNode(6);
    struct node *p4 = createNode(15);
    struct node *p6 = createNode(20);
    root->left = p1;
    p1->left = p2;
    p1->right = p3;
    root->right = p4;
    p4->right = p6;
    inOrderTraversal(root);
    cout << endl;
    insertBST(root, 14);
    insertBST(root, 16);
    insertBST(root, 9);
    insertBST(root, 21);
    inOrderTraversal(root);

    return 0;
}