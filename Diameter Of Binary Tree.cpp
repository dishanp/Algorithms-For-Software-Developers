class Solution {
public:
    int util(TreeNode *root,int *h){
        if(!root)
            return 0;
        int lh=0;
        int rh=0;
        int ld=0;
        int rd=0;
        ld=util(root->left,&lh);
        rd=util(root->right,&rh);
        *h=max(lh,rh)+1;
        return max(lh+rh,max(ld,rd));
        
    }
    int diameterOfBinaryTree(TreeNode* root) {
        if(!root)
            return 0;
        int h=0;
        return util(root,&h);
}
};
