class Solution{
public:
  bool exists(TreeNode *root,int target){
  if(!root)
    return false;
  if(root->val==target && root->left==nullptr && root->right==nullptr)
    return true;
    return exists(root->left,target-root->val)||exists(root->right,target-root>val);
  }
}
