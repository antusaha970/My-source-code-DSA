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
TreeNode *insertIntoBST(TreeNode *root, int val)
{
    if (root == NULL)
    {
        struct TreeNode *newNode = new TreeNode(val);
        return newNode;
    }
    struct TreeNode *prev;
    struct TreeNode *cpyRoot;
    cpyRoot = root;
    while (root != NULL)
    {
        prev = root;
        if (root->val < val)
            root = root->right;

        else
            root = root->left;
    }
    struct TreeNode *newNode = new TreeNode(val);
    if (prev->val > val)
        prev->left = newNode;
    else
        prev->right = newNode;
    return cpyRoot;
}

int main()
{

    return 0;
}