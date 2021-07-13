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
    vector<int> largestValues(TreeNode* root) {
        vector<int>res;
        if(!root)
    	return res;
        int max;
    	queue<TreeNode*>q;
    	q.push(root);
    	while(!q.empty()){
    	    int s=q.size();
            max=INT_MIN;
    	    for(int i=0;i<s;i++){
    	    TreeNode *t=q.front();
    	    q.pop();
    	    if(t->left)
    	    q.push(t->left);
    	    if(t->right)
    	    q.push(t->right);
    	    if(t->val>max)
    	    max=t->val;
    	    }
    	    res.push_back(max);
    	}
    	return res;
    }
};
