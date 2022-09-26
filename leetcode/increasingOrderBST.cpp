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

class Solution
{
public:
    void inOrder(TreeNode *root, vector<int> &v)
    {
        if (root != nullptr)
        {
            inOrder(root->left, v);
            v.push_back(root->val);
            inOrder(root->right, v);
        }
    }
    TreeNode *increasingBST(TreeNode *root)
    {
        vector<int> elements;
        inOrder(root, elements);
        TreeNode *newRoot, *tmp;
        newRoot = new TreeNode(elements[0]);
        tmp = newRoot;
        for (int i = 1; i < elements.size(); i++)
        {
            tmp->right = new TreeNode(elements[i]);
            tmp = tmp->right;
        }
        return newRoot;
    }
};

int main()
{

    return 0;
}