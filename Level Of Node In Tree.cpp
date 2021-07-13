class Solution{
  public:
    // function should return level of the target node
    int getLevel(struct Node *root, int target)
    {
    	if(!root)
    	return 0;
    	int ctr=1;
    	queue<struct Node*>q;
    	q.push(root);
    	while(!q.empty()){
    	    int s=q.size();
    	    for(int i=0;i<s;i++){
    	    struct Node *t=q.front();
    	    q.pop();
    	    if(t->left)
    	    q.push(t->left);
    	    if(t->right)
    	    q.push(t->right);
    	    if(t->data==target)
    	    return ctr;
    	    }
    	    ++ctr;
    	}
    	return 0;
    }
};
