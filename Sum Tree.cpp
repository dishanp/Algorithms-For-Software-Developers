class Solution
{
    public:
    int sum(Node *root){
        if(!root)
        return 0;
        return root->data+sum(root->left)+sum(root->right);
    }
    bool isSumTree(Node* root)
    {
        if(!root)
        return true;
        if(!root->left&&!root->right)
        return true;
        return (root->data==sum(root->left)+sum(root->right))&&isSumTree(root->left)&&isSumTree(root->right);
    }
};
