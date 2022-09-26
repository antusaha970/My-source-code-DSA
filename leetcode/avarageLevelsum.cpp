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

vector<double> averageOfLevels(TreeNode *root)
{
    vector<double> ans;
    queue<TreeNode *> q;
    q.push(root);
    while (!q.empty())
    {
        double tmp = q.size();
        double sum = 0;
        for (int i = 0; i < tmp; i++)
        {
            auto tmpt = q.front();
            q.pop();
            sum += tmpt->val;
            if (tmpt->left)
            {
                q.push(tmpt->left);
            }
            if (tmpt->right)
            {
                q.push(tmpt->right);
            }
        }
        ans.push_back(sum / tmp);
    }
    return ans;
}

int main()
{

    return 0;
}