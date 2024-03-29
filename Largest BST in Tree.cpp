class Solution{
public:
bool isBST(Node* root,int min,int max){
if(!root) return true;
if(root->data<=min || root->data>=max) return false;
return (isBST(root->left,min,root->data) && isBST(root->right,root->data,max));
}
int size(Node* root){
if(!root) return 0;
return size(root->left)+1+size(root->right);
}
int largestBst(Node *root)
{
if(isBST(root,INT_MIN,INT_MAX)) return size(root);
return max(largestBst(root->left),largestBst(root->right));
}
};
