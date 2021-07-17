class Solution
{
    public: 
    //Function to convert binary tree to doubly linked list and return it.
    void util(Node **head,Node **tail,Node *root){
        if(!root)
        return;
        Node *left=root->left;
        Node *right=root->right;
        util(head,tail,root->left);
        if(!*head){
            *head=root;
        }
        root->left=*tail;
        if(*tail){
            (*tail)->right=root;
        }
        *tail=root;
        util(head,tail,root->right);
    }
    
    Node * bToDLL(Node *root)
    {
        if(!root)
        return root;
        Node *head=nullptr;
        Node *tail=nullptr;
        util(&head,&tail,root);
        return head;
    }
};

