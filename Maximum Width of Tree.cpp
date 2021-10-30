class Solution {
  public:
    // Function to get the maximum width of a binary tree.
    int getMaxWidth(Node* root) {
        queue<Node *>q;
        q.push(root);
        int ctr;
        int res=0;
        while(!q.empty()){
            int s=q.size();
            ctr=0;
            for(int i=0;i<s;i++){
                Node *x=q.front();
                ++ctr;
                q.pop();
                if(x->left)
                q.push(x->left);
                if(x->right)
                q.push(x->right);
            }
            res=max(res,ctr);
        }
        return res;
    }
};
