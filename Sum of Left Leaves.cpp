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
    void util(TreeNode *root,int &sum){
        if(!root)
            return;
            util(root->left,sum);
         if(root->left){
            if(!root->left->left&&!root->left->right){
                sum+=root->left->val;
            }
         }
            util(root->right,sum);
        
    }
    int sumOfLeftLeaves(TreeNode* root) {
        if(!root)
            return 0;
        int sum=0;
        util(root,sum);
        return sum;
    }
};
