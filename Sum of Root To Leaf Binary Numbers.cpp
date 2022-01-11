class Solution {
public:

void Ans(TreeNode *R, int cur, int &ret)
{
        cur=cur*2+R->val;
        if(R->left!=NULL) Ans(R->left,cur,ret);
        if(R->right!=NULL) Ans(R->right,cur,ret);
        if(R->left==NULL && R->right==NULL) ret+=cur;
}        
int sumRootToLeaf(TreeNode* R) {
    int ret=0,cur=0;
    Ans(R,cur,ret);
    return(ret);
}
};
