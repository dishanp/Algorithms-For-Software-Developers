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
    void util(vector<string>&res,TreeNode *r,string s){
        
        if(!r->left&&!r->right)
            res.push_back(s);
        if(r->left)
        util(res,r->left,s+"->"+to_string(r->left->val));
        if(r->right)
        util(res,r->right,s+"->"+to_string(r->right->val));
        
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string>res;
        if(!root)
            return res;
        util(res,root,to_string(root->val));
        return res;
    }
};
