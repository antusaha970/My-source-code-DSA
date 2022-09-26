#include <iostream>
#include<vector>
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
private:

    static struct Treenode *prev;
public:
    void helper(vector<long long> &v,TreeNode *root){
        if(root!=nullptr){
            helper(v,root->left);
            v.push_back(root->val);
            helper(v,root->right);
        }
    }
    bool isValidBST(TreeNode *root)
    {
       vector<long long> v;
       helper(v,root);
       for (int i = 0; i < v.size()-1; i++)
       {
            if(v[i] >= v[i+1])
                return false;
       }
       return true;
    }
};

int main()
{

    return 0;
}