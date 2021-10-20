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
    int maxLevelSum(TreeNode* root) {
        if(!root)
            return 0;
        queue<TreeNode *>q;
        q.push(root);
        int sum=0;
        int ctr=1;
        int lev;
        int max=INT_MIN;
        while(!q.empty()){
            int s=q.size();
            sum=0;
            for(int i=0;i<s;i++){
                TreeNode *t=q.front();
                q.pop();
                if(t->left)
                    q.push(t->left);
                if(t->right)
                    q.push(t->right);
                sum+=t->val;
            }
            if(sum>max){
                max=sum;
                lev=ctr;
            }
            ++ctr;
        }
        return lev;
    }
};
