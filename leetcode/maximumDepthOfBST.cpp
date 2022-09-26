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

int maxDepth(TreeNode *root)
{
    // base case
    if (root == NULL)
        return 0;
    int leftSubHeight = maxDepth(root->left);
    int rightSubHeight = maxDepth(root->right);

    int ans = max(leftSubHeight, rightSubHeight) + 1;
    return ans;
}

int main()
{

    return 0;
}