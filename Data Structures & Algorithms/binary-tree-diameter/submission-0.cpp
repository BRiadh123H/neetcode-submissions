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
    int dfs(TreeNode* root,int &res)
    {if (root==nullptr)
    {
        return 0;
    }
    else
    {
        int a= dfs(root->left,res);
        int b= dfs(root->right,res);
        res=max(res,a+b);
        return 1+max(a,b);
    }}
    int diameterOfBinaryTree(TreeNode* root) {
        int res=0;
        dfs(root,res);
        return res;
    }
};
