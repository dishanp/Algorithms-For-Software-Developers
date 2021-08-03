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
    void getin(TreeNode *r,vector<int>&vec){
        if(r){
            getin(r->left,vec);
            vec.push_back(r->val);
            getin(r->right,vec);
        }
    }
    int kthSmallest(TreeNode* root, int k) {
        vector<int>vec;
        getin(root,vec);
        return vec[k-1];
    }
};


