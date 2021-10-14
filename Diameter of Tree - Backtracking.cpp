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
    int util(TreeNode *root,int &d){
        if(!root)
            return 0;
        int ld=util(root->left,d);
        int rd=util(root->right,d);
        d=max(d,ld+rd);
        return 1+max(ld,rd);
    }
    int diameterOfBinaryTree(TreeNode* root) {
        int d=0;
        util(root,d);
        return d;
    }
};
