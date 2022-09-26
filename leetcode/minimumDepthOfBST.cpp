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

int minDepth(TreeNode *root)
{
    if (root == NULL)
        return 0;

    int leftSubTree = minDepth(root->left);
    int rightSubTree = minDepth(root->right);

    int ans = min(leftSubTree, rightSubTree) + 1;
    return ans;
}

int main()
{

    return 0;
}