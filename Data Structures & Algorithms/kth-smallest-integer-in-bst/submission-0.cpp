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
    void dfs(TreeNode* root,priority_queue<int>& maxheap,int k)
    {if (root==nullptr)
        return ;
    else
    {    
        maxheap.push(root->val);
        while (maxheap.size()>k)
            maxheap.pop();
        dfs (root->right,maxheap,k);
        dfs (root->left,maxheap,k);
        }
    return ;}
    int kthSmallest(TreeNode* root, int k) {

        priority_queue<int> maxheap;
        dfs(root,maxheap,k);
        return maxheap.top();
    }
};
