#include <iostream>
#include <vector>
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

/*
    we used pre-order traversal here.
*/
void helper(TreeNode *root, vector<int> &v)
{
    if (root != NULL)
    {
        v.push_back(root->val);
        helper(root->left, v);
        helper(root->right, v);
    }
}

bool isUnivalTree(TreeNode *root)
{
    vector<int> v;
    helper(root, v);
    for (int i = 0; i < v.size() - 1; i++)
    {
        if (v[i] != v[i + 1])
            return false;
    }
    return true;
}

int main()
{

    return 0;
}