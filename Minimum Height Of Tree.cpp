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
    int minDepth(TreeNode* r) {
        if(!r)
            return 0;
        if(r->left==nullptr)
            return minDepth(r->right)+1;
        if(r->right==nullptr)
            return minDepth(r->left)+1;
        int x=minDepth(r->left);
        int y=minDepth(r->right);
        if(x<y)
            return x+1;
            return y+1;
    }
};
