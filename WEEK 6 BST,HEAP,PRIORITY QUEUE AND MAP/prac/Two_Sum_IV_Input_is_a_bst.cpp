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
 * //LInk->https://leetcode.com/problems/two-sum-iv-input-is-a-bst/description/
 */
class Solution {
public:
    vector<int>v;
    void vector_input(TreeNode* root)
    {
        if(root==NULL) return;
        v.push_back(root->val);
        vector_input(root->left);
        vector_input(root->right);
    }
    bool findTarget(TreeNode* root, int k) {
        vector_input(root);
        int sz = v.size();
        bool found = false;
        for(int i=0;i<sz-1;i++)
        {
            for(int j=i+1;j<sz;j++)
            {
                if(v[i]+v[j]==k)
                {
                   found = true;
                   break; 
                }
            }
            if(found) break;
        }
        return found;
    }
};