#include <iostream>
#include <stack>
#include <queue>
#include <vector>
#include <climits>
#include<algorithm>
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
vector<vector<int>> levelOrderBottom(TreeNode *root)
{
    vector<vector<int>> ans;
    if (root == NULL)
        return ans;

    queue<TreeNode *> q;
    q.push(root);
    while (!q.empty())
    {
       int size = q.size();
       vector<int> v;
       for (int i = 0; i < size; i++)
       {
            auto tmp = q.front();
            q.pop();
            if(tmp){
                v.push_back(tmp->val);
                if(tmp->left){
                    q.push(tmp->left);
                }
                if(tmp->right){
                    q.push(tmp->right);
                }
            }
       }
       ans.push_back(v);
    }
    reverse(ans.begin(),ans.end());
    return ans;
}

int main()
{
    // TreeNode * p= NULL;
    stack<int> s;
    s.push(1);
    s.push(2);
    // s.push(p);

    return 0;
}