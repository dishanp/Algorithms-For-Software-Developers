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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>>res;
        if(!root)
            return res;
        queue<TreeNode* >q;
        q.push(root);
        int j=1;
        while(!q.empty()){
            int s=q.size();
            vector<int>a;
            for(int i=0;i<s;i++){
                TreeNode* t=q.front();
                a.push_back(t->val);
                q.pop();
                if(t->left)
                    q.push(t->left);
                if(t->right)
                    q.push(t->right);
            }
            if(j%2==0)
                reverse(a.begin(),a.end());
            res.push_back(a);
            j++;
        }
        return res;
    }
};
