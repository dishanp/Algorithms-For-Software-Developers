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
    TreeNode* searchBST(TreeNode* root, int v) {
        if(!root)
            return nullptr;
        if(root->val==v)
            return root;
        else if(root->val>v)
            return searchBST(root->left,v);
        else
            return searchBST(root->right,v);
        return nullptr;
    }
};
