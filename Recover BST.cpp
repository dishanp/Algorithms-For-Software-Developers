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
    TreeNode* first=0;
    TreeNode* sec=0;
    TreeNode* prev=new TreeNode(INT_MIN);
    void inorder(TreeNode* root){
        if(!root)
            return;
        inorder(root->left);
        if(!first&&root->val<prev->val)
            first=prev;
         if(first&&root->val<prev->val)
            sec=root;
        prev=root;
        inorder(root->right);
    }
    void recoverTree(TreeNode* root) {
        inorder(root);
        int temp=first->val;
        first->val=sec->val;
        sec->val=temp;
    }
};
