void util(Node *root,int &s){
    if(root){
        util(root->left,s);
        if(root->left&&!root->left->left&&!root->left->right)
        s+=root->left->data;
        util(root->right,s);
        
    }
    return;
}
int leftLeavesSum(Node *root)
{
   int sum=0;
   util(root,sum);
   return sum;
}
