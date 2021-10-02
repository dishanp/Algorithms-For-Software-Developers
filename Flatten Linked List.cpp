 Node * merge(Node * r1,Node *r2){
        if(!r1)
        return r2;
        if(!r2)
        return r1;
        Node *res;
        if(r1->data<r2->data){
            res=r1;
            res->bottom=merge(r1->bottom,r2);
        }
        else{
            res=r2;
            res->bottom=merge(r1,r2->bottom);
        }
        res->next=0;
        return res;
    }
Node *flatten(Node *root)
{
   if(!root||!root->next)
   return root;
   root->next=flatten(root->next);
   root=merge(root,root->next);
   return root;
}
