class Solution {
public:
    TreeNode* helper(TreeNode* root, vector<int> &nums, int l, int r) {
        if (l <= r) {
            int m = l + (r - l) / 2;
            root = new TreeNode(nums[m]);
            root->left = helper(NULL, nums, l,  m - 1);

           
            root->right = helper(NULL, nums, m + 1,  r);
        }
        return root;
    }
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        int len=0;
        TreeNode *root=nullptr;
        return helper(root,nums,0,nums.size()-1);
    }
};
