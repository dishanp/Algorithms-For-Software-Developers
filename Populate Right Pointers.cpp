void solve(Node *root)
    {
        if(!root) return;
        if(!root->left and !root->right) return;
        root->left->next=root->right;
        solve(root->left);
            if(root->next)
            {
                root->right->next=root->next->left;
            }
            else
            {
                root->next=NULL;
            }
        solve(root->right);
        return;
    }
public:
    Node* connect(Node* root) {
        solve(root);
        return root;
      }
};
