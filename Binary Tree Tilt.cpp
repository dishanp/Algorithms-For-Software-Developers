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
    int sum;
    int s(TreeNode *root){
        if(!root)
            return 0;
        return s(root->left)+s(root->right)+root->val;
    }
   void util(TreeNode *root){
        if(!root)
            return;
        sum+=abs(s(root->left)-s(root->right));
        util(root->left);
        util(root->right);
    }
    int findTilt(TreeNode* root) {
        if(!root)
            return 0;
        util(root);
        return sum;
    }
};
