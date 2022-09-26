#include <iostream>
#include <queue>
#include <stack>
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

void inOrderTraversal(struct node *root)
{
    if (root != NULL)
    {
        inOrderTraversal(root->left);
        cout << root->data << " ";
        inOrderTraversal(root->right);
    }
}

void levelOrderTraverSal(struct node *root)
{
    queue<node *> q;
    q.push(root);
    q.push(NULL);
    while (!q.empty())
    {
        node *tmp = q.front();
        q.pop();
        if (tmp == NULL)
        {
            cout << endl;
            if (!q.empty())
            {
                q.push(NULL);
            }
        }
        else
        {
            cout << tmp->data << " ";

            if (tmp->left)
            {
                q.push(tmp->left);
            }
            if (tmp->right)
            {
                q.push(tmp->right);
            }
        }
    }
}

void reverseLevelOrderTraversal(struct node *root)
{
    queue<node *> q;
    stack<int> s;
    q.push(root);
    while (!q.empty())
    {
        node *tmp = q.front();
        q.pop();
        s.push(tmp->data);
        if (tmp->right)
            q.push(tmp->right);
        if (tmp->left)
            q.push(tmp->left);
    }
    while (!s.empty())
    {
        cout<<s.top()<<" ";
        s.pop();
    }
    
}

int main()
{
    struct node *root = createNode(10);
    struct node *p1 = createNode(5);
    struct node *p2 = createNode(1);
    struct node *p3 = createNode(6);
    struct node *p4 = createNode(11);
    struct node *p6 = createNode(12);

    root->left = p1;
    p1->left = p2;
    p1->right = p3;
    root->right = p4;
    p4->right = p6;
    levelOrderTraverSal(root);
    cout<<endl;
    reverseLevelOrderTraversal(root);

    return 0;
}