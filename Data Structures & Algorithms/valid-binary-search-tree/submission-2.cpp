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
    bool check(TreeNode* root ,int maxi,int mini ){
    if (root==nullptr)
        return true;
    if ((root->val>=maxi)||(root->val<=mini))
        return false;
    return (check(root->right,maxi,root->val)&&check(root->left,root->val,mini));
    }
    bool isValidBST(TreeNode* root) {
        return check(root,INT_MAX,INT_MIN);

    }
};
