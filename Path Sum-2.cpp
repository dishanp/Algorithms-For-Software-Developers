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
void util(TreeNode *root,vector<vector<int>>&res,int k,vector<int>p,int tar){
        if(!root)
            return;
        k+=root->val;
        p.push_back(root->val);
        if(!root->left&&!root->right&&k==tar){
            res.push_back(p);
        }
        util(root->left,res,k,p,tar);
        util(root->right,res,k,p,tar);
    }
    vector<vector<int>> pathSum(TreeNode* root, int tar) {
        vector<vector<int>>res;
        if(!root)
            return res;
        vector<int>p;
        int k=0;
        util(root,res,k,p,tar);
        return res;
    }
};
