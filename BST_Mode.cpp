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
    unordered_map<int,int>f;
    unordered_map<int,vector<int>>f2;
    void inorder(TreeNode *r){
        if(r){
            inorder(r->left);
            f[r->val]++;
            inorder(r->right);
        }
    }
    vector<int> findMode(TreeNode* root) {
        vector<int>a;
        inorder(root);
        int max_freq=INT_MIN;
         for (auto temp : f) {
            int freq = temp.second;
            max_freq = max(max_freq, freq);
            f2[freq].push_back(temp.first);
        }
        
        return f2[max_freq];
    }
};
