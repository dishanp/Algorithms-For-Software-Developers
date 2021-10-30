class Solution{
  public:
    // returns the inorder successor of the Node x in BST (rooted at 'root')
    void util(Node *root,Node *x,Node **res,int &min){
        if(root){
            util(root->left,x,res,min);
            if(root->data-x->data<min&&x->data<root->data){
                *res=root;
                min=root->data-x->data;
            }
            util(root->right,x,res,min);
        }
    }
    Node * inOrderSuccessor(Node *root, Node *x)
    {
        int min=INT_MAX;
        Node *res=new Node(-1);
        util(root,x,&res,min);
        return res;
    }
};
