void util(Node *root,vector<int>&res){
        if(root){
            util(root->left,res);
            util(root->right,res);
            res.push_back(root->data);
        }
    }
    vector<int> postOrder(Node* root) {
        vector<int>res;
        util(root,res);
        return res;
    }
