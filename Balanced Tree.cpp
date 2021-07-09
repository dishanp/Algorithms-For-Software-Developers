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
    bool isBalanced(TreeNode* root) {
        if(!root)
            return true;
        int lt=height(root->left);
        int rt=height(root->right);
        if(abs(lt-rt)<=1&&isBalanced(root->left)&&isBalanced(root->right))
            return true;
        return false;
    }
    int height(TreeNode *r){
        if(!r)
            return 0;
        int x=height(r->left);
        int y=height(r->right);
        if(x>y)
            return x+1;
            return y+1;
    }
};
