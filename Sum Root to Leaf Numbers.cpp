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
    int sum;
    void util(TreeNode* &root,int cs){
        cs=(cs*10)+root->val;
        if(root->left==0&&root->right==0){
            sum+=cs;
        }
        if(root->left)
            util(root->left,cs);
        if(root->right)
            util(root->right,cs);
        
    }
    int sumNumbers(TreeNode* root) {
        if(!root)
            return 0;
        sum=0;
        util(root,0);
        return sum;
    }
};
