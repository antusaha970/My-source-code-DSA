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

struct node *itertiveSearch(struct node *root, int target)
{
    while (root != NULL)
    {
        if (root->data == target)
            return root;
        else if (root->data > target)
        {
            root = root->left;
        }
        else
        {
            root = root->right;
        }
    }
    return NULL;
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
    // struct node *n = searchNode(root, 6);
    struct node *n = itertiveSearch(root, 10);
    cout << n->data << endl;

    return 0;
}