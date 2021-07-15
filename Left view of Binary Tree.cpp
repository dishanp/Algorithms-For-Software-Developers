vector<int> leftView(Node *root)
{
  queue<Node*>q;
  vector<int>res;
  if(!root)
  return res;
  q.push(root);
  while(!q.empty()){
      int s=q.size();
      for(int i=0;i<s;i++){
          Node *t=q.front();
          q.pop();
          if(i==0)
          res.push_back(t->data);
          if(t->left)
          q.push(t->left);
          if(t->right)
          q.push(t->right);
       }
      }
      return res;
}
