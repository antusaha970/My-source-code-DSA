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

struct node *inOrderPredressior(struct node *root)
{
    root = root->left;
    while (root->right != NULL)
    {
        root = root->right;
    }
    return root;
}
struct node *deletionInBST(struct node *root, int key)
{
    // base conditions
     if (root == NULL)
        return NULL;
    if (root->data == key)
    {
        if (root->left == NULL && root->right == NULL)
        {
            delete root;
            return NULL;
        }
    }
    
    struct node *iPrev;
    // searching for element
    if (root->data > key)
    {
        root->left = deletionInBST(root->left, key);
    }
    else if (root->data < key)
    {
        root->right = deletionInBST(root->right, key);
    }
    // Here we've found the element
    else
    {
        iPrev = inOrderPredressior(root);
        root->data = iPrev->data;
        root->left = deletionInBST(root->left, iPrev->data);
    }

    return root;
}

int main()
{

    // struct node *root = createNode(5);
    // struct node *p1 = createNode(3);
    // struct node *p2 = createNode(6);
    // struct node *p3 = createNode(1);
    // struct node *p4 = createNode(4);
    // root->left = p1;
    // p1->left = p3;
    // p1->right = p4;
    // root->right = p2;
    struct node *root = createNode(1);
    struct node *p1 = createNode(2);
    root->right = p1;
    inOrderTraversal(root);
    cout << endl;
    deletionInBST(root, 1);
    inOrderTraversal(root);

    return 0;
}