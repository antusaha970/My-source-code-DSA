#include <iostream>
#include <vector>
#include <queue>
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

vector<vector<int>> levelOrder(TreeNode *root)
{
    vector<vector<int>> ans;
    if(root==NULL){
        return ans;
    }
    queue<TreeNode *> q;
    q.push(root);
    while (!q.empty())
    {
        vector<int> tmpV;
        int size = q.size();
        for (int i = 0; i < size; i++)
        {
            auto tmp = q.front();
            q.pop();
            if (tmp)
            {
                tmpV.push_back(tmp->val);
                if (tmp->left)
                {
                    q.push(tmp->left);
                }
                if (tmp->right)
                {
                    q.push(tmp->right);
                }
            }
        }
        ans.push_back(tmpV);
    }
    return ans;
}

int main()
{

    return 0;
}