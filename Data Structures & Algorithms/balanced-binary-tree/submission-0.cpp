/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

class Solution {
public:
    pair<int,int> dfs (TreeNode* root){
        if (root==nullptr)
        {
            return {1,0};
        }
        else
        {
            pair<int,int> a= dfs(root->left);
            pair<int,int> b= dfs(root->right);
            if ((a.first==1)&&(b.first==1)&&(abs(a.second-b.second)<=1))
            {
                return {1,1+max(a.second,b.second)};
            }
            else
                return {0,1+max(a.second,b.second)};
        }
    }
    bool isBalanced(TreeNode* root) {
        return dfs(root).first==1;
    }
};
