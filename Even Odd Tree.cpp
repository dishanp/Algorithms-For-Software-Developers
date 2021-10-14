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
    bool isEvenOddTree(TreeNode* r) {
    if(!r)
    return true;
    queue<TreeNode *>q;
    q.push(r);
    int lev=0;
    while(!q.empty()){
        int s=q.size();
        int last;
        for(int i=0;i<s;i++){
        TreeNode *x=q.front();
        if(lev%2==0&&i>0&&last>=x->val)
            return false;
        if(lev%2!=0&&i>0&&last<=x->val)
            return false;
        last=x->val;
        if(lev%2==0&&x->val%2==0)
            return false;
        if(lev%2!=0&&x->val%2!=0)
            return false;
        q.pop();
        if(x->left)
        q.push(x->left);
        if(x->right)
        q.push(x->right);
        }
         ++lev;
    }
        return true;
    }
};
