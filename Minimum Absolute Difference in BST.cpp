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
    TreeNode *prev;
    void util(int &res,TreeNode *r){
        if(r){
            util(res,r->left);
            if(prev)
            res=min(res,abs(r->val-prev->val));
            prev=r;
            util(res,r->right);
        }
    }
    int getMinimumDifference(TreeNode* root) {
        int diff=root->val;
        int res=INT_MAX;
        util(res,root);
        return res;
    }
};
