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
    TreeNode* util(TreeNode* root,int x,int dep,int &lev){
        if(!root)
            return nullptr;
        if(root->left&&root->left->val==x||root->right&&root->right->val==x)
        {
            lev=dep;
            return root;
        }
        TreeNode *l=util(root->left,x,dep+1,lev);
        if(l)
            return l;
        TreeNode *r=util(root->right,x,dep+1,lev);
        if(r)
            return r;
        return 0;
        
    }
    bool isCousins(TreeNode* root, int x, int y) {
       if(!root)
           return false;
        int x_dep=-1;
        int y_dep=-1;
        TreeNode* x_parent=util(root,x,0,x_dep);
        TreeNode* y_parent=util(root,y,0,y_dep);
        if(x_parent==y_parent||x_dep!=y_dep)
            return false;
        return true;
    }
};
