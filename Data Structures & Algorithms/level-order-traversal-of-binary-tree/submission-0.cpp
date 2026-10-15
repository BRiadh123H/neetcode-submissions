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
    vector<vector<int>> levelOrder(TreeNode* root) {
        if (root==nullptr)
            return {};
        vector<vector<int>>m;
        queue<TreeNode*>q;
        q.push(root);
        while (!q.empty())
        {
            int current=q.size();
            vector<int>l;
            for (int i=0;i<current;i++)
            {
                auto a=q.front();
                l.push_back(a->val);
                q.pop();
                if (a->left!=nullptr) q.push(a->left);
                if (a->right!=nullptr) q.push(a->right);
                
            }  
            m.push_back(l);
        }
        return m;


    }
};
