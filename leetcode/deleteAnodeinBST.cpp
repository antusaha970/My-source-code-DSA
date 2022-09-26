#include <iostream>
using namespace std;

// Definition for a binary tree node.
struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

TreeNode *inOrderPredrecssior(TreeNode *root)
{
    root = root->left;
    while (root->right != NULL)
    {
        root = root->right;
    }
    return root;
}

TreeNode *deleteNode(TreeNode *root, int key)
{
    // base cases
    if (root == NULL)
    {
        return NULL;
    }
    // Need to check this conditon
    if (root->val == key)
    {
        if (root->left == NULL && root->right == NULL)
        {
            delete root;
            return NULL;
        }
    }
    // search for the node
    struct TreeNode *iPrev;
    if (root->val > key)
    {
        root->left = deleteNode(root->left, key);
    }
    else if (root->val < key)
    {
        root->right = deleteNode(root->right, key);
    }
    // Here we've found the node
    else
    {
        iPrev = inOrderPredrecssior(root);
        root->val = iPrev->val;
        root->left = deleteNode(root->left, iPrev->val);
    }
    return root;
}

int main()
{

    return 0;
}