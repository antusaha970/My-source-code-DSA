#include <iostream>
#include <vector>
#include <climits>
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

void helper(vector<int> &v1, TreeNode *root)
{
    if (root != nullptr)
    {
        helper(v1, root->left);
        v1.push_back(root->val);
        helper(v1, root->right);
    }
    else
    {
        v1.push_back(INT_MAX);
    }
}

bool isSameTree(TreeNode *p, TreeNode *q)
{
    /*
        Frist we will check if both are null or not . If both are null then it means they are equal.
        Then we will check any of pointer is null or not .If any pointer null and other is not null then is means it is not equal.
        Then we will check if valus are not equal or not if valus are  not  equal it means not same .
        Finaly we will do this same thing for right sub tree and left sub tree.
        !!DRY run this code for a better understanding!!
    */
    if (p == nullptr && q == nullptr)
        return true;
    if (p == nullptr || q == nullptr)
        return false;
    if (p->val != q->val)
        return false;
    return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
}

int main()
{

    return 0;
}