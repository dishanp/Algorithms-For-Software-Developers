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
    TreeNode* insertIntoBST(TreeNode* root, int v) {
        TreeNode *h=root;
        TreeNode* r=nullptr;
        if(!root)
        {
            h=new TreeNode();
            h->val=v;
            h->left=h->right=nullptr;
            return h;
        }
        while(root){
            r=root;
            if(v==root->val)
                return nullptr;
            if(v>root->val)
                root=root->right;
            else
                root=root->left;
        }
        TreeNode *temp=new TreeNode();
        temp->val=v;
        temp->left=temp->right=0;
        if(temp->val>r->val)
           r->right=temp;
        else
           r->left=temp;
        return h;
    }
};
