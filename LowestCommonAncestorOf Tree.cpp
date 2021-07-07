class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(root == nullptr)
            return nullptr;
        if(root == p || root == q)
            return root;
        TreeNode* leftsearch = lowestCommonAncestor(root->left, p, q);
        TreeNode* rightsearch = lowestCommonAncestor(root->right, p, q);
       
        if(leftsearch != nullptr && rightsearch != nullptr)
            return root;
        
        if(leftsearch == nullptr && rightsearch == nullptr)
            return nullptr;
        
        if(leftsearch == nullptr && rightsearch != nullptr)
            return rightsearch;
        
        else 
            return leftsearch;
    }
};
