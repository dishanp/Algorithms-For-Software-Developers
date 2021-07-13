class Solution{
  public:
    int height(Node *root){
        if (root->left == NULL && root->right == NULL)
		return 0;

	int left = 0;
	if (root->left != NULL)
		left = height(root->left);

	int right = 0;
	if (root->right != NULL)
		right = height(root->right);

	return (max(left, right) + 1);
    }
    void getsum(Node *r,int *sum,int lev){
        if(!r)
        return ;
        sum[lev]+=r->data;
        getsum(r->left,sum,lev+1);
        getsum(r->right,sum,lev+1);
    }
    int maxLevelSum(Node* root) {
        int h=height(root);
        int lev=h+1;
        int n=lev;
        int sum[lev]={0};
        getsum(root,sum,0);
        int max=INT_MIN;
        for(int i=0;i<n;i++){
            if(sum[i]>max)
            max=sum[i];
        }
        return max;
    }
};
