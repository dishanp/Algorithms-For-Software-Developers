class Solution {
  public:
    int countNonLeafNodes(Node* root) {
        if(root&&(root->left||root->right)){
           return 1+countNonLeafNodes(root->left)+countNonLeafNodes(root->right);
        }
       return 0;
    }
};
