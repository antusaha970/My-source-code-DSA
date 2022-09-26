#include <iostream>
#include <vector>
using namespace std;

//  Definition for a binary tree node.
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
    void inOrderTraversal(TreeNode *root, vector<int> &vals)
    {
        if (root != NULL)
        {
            inOrderTraversal(root->left, vals);
            vals.push_back(root->val);
            inOrderTraversal(root->right, vals);
        }
    }
    bool findTarget(TreeNode *root, int k)
    {
        vector<int> vals;
        inOrderTraversal(root, vals);
        for (int i = 0; i < vals.size() - 1; i++)
        {
            for (int j = 0; j < vals.size(); j++)
            {
                if (i != j)
                {
                    if ((vals[i] + vals[j]) == k)
                    {
                        return true;
                    }
                }
            }
        }
        return false;
    }
};

int main()
{

    return 0;
}