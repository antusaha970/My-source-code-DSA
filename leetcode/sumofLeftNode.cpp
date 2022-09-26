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


void helper(TreeNode *root, int &sum,bool isLeft){
    if(root!=NULL){
        if(isLeft && root->left== NULL && root->right == NULL) 
            sum += root->val;
        helper(root->left,sum,true);
        helper(root->right,sum,false);
    }
}

int sumOfLeftLeaves(TreeNode *root)
{
    int sum = 0;
    helper(root,sum,false);
    return sum;
}

int main()
{

    return 0;
}