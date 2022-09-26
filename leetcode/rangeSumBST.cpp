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
    void inOrderTraversal(vector<int> &elements, TreeNode *root, int low, int high)
    {
        if (root != NULL)
        {
            inOrderTraversal(elements, root->left, low, high);
            if (root->val <= high && root->val >= low)
            {
                elements.push_back(root->val);
            }
            inOrderTraversal(elements, root->right, low, high);
        }
    }
    int rangeSumBST(TreeNode *root, int low, int high)
    {
        vector<int> elements;
        inOrderTraversal(elements, root, low, high);
        int sum = 0;
        for (int i : elements)
        {
            sum += i;
        }
        return sum;
    }
};

int main()
{
    TreeNode *p = new TreeNode(2);
    cout<<p->val;

    return 0;
}