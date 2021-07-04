class Solution {
  public:
    // Function to return a list containing the inorder traversal of the tree.
    void util(Node *root,vector<int>&res){
        if(root){
            util(root->left,res);
            res.push_back(root->data);
            util(root->right,res);
        }
    }
    vector<int> inOrder(Node* root) {
        vector<int>res;
        util(root,res);
        return res;
    }
    
};
