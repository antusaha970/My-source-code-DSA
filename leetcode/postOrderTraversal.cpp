#include<iostream>
#include<vector>
using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};
class Solution {
public:
    void helper(vector<int> &ans,TreeNode *root){
        if(root!=nullptr){
            helper(ans,root->left);
            helper(ans,root->right);
            ans.push_back(root->val);
        }
    }
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> ans;
        helper(ans,root);
        return ans;
    }
};



int main()
{
    
    return 0;
}