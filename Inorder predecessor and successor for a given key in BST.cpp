void findPreSuc(Node* root, Node*& pre, Node*& suc, int key)
{
    if(!root)
    return;
    if(root->key==key){
        if(root->left){
            Node *t=root->left;
            while(t->right)
            t=t->right;
            pre=t;
        }
        if(root->right){
            Node *t=root->right;
            while(t->left)
            t=t->left;
            suc=t;
        }
        return;
    }
    if(root->key<key){
        pre=root;
        findPreSuc(root->right, pre, suc, key);
    }
    else{
        suc=root;
         findPreSuc(root->left, pre, suc, key);
    }
}
