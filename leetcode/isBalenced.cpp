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

int height(TreeNode *root)
{
    if (root == NULL)
    {
        return 0;
    }
    int leftHi = height(root->left);
    int rigtHi = height(root->right);

    int maxHeight = max(leftHi, rigtHi) + 1;
    return maxHeight;
}

bool isBalanced(TreeNode *root)
{
    // Base case
    if (root == NULL)
    {
        return true;
    }
    bool leftSub = isBalanced(root->left);
    bool rightSub = isBalanced(root->right);
    bool differ = abs(height(root->left) - height(root->right)) <= 1;
    bool ans = false;
    if (leftSub && rightSub && differ)
    {
        ans = true;
    }
    return ans;
}

int main()
{

    return 0;
}