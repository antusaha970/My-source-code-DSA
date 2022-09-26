#include <iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;

    Node(int x)
    {
        data = x;
        left = right = NULL;
    }
};

int height(struct Node *node)
{
    if (node == NULL)
    {
        return 0;
    }
    int left = height(node->left);
    int right = height(node->right);

    int ans = max(left, right) + 1;
    return ans;
}

bool isBalanced(Node *root)
{

    if (root == NULL)
    {
        return true;
    }
    bool leftSub = isBalanced(root->left);
    bool rightSub = isBalanced(root->right);

    bool diff = abs(height(root->left) - height(root->right)) <= 1;
    if (leftSub && rightSub && diff)
    {
        return true;
    }
    else
        return false;
}

int main()
{

    return 0;
}