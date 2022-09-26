#include<iostream>
#include<vector>
using namespace std;


// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
public:
    /*
        Frist Traverse all node and push them in a Array.
        Now Return Arrays k-1 element.
    */
    void helper(TreeNode *root,vector<int> &v){
        if(root!=NULL){
            helper(root->left,v);
            v.push_back(root->val);
            helper(root->right,v);
        }
    }
    int kthSmallest(TreeNode* root, int k) {
        vector<int> v;
        helper(root,v);
        int ans = v[k-1];
        return ans;
    }
};
int main()
{
    
    return 0;
}