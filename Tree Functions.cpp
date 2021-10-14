using namespace std;
#include<bits/stdc++.h>
typedef struct tree{
    int data;
    struct tree* left;
    struct tree* right;
}node;
struct tree *newNode(int val){
    struct tree *n=new tree();
    n->data=val;
    n->left=n->right=0;
    return n;
}
void preorder(struct tree *root){
    if(root)
{   cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}
}
int util(node *root,int &d){
    if(!root)
    return 0;
    int ld=util(root->left,d);
    int rd=util(root->right,d);
    d=max(d,ld+rd);
    return 1+max(ld,rd);
}
void diameter(node *root){
    int d=0;
    util(root,d);
    cout<<endl<<d;
}
void level(node *r){
    if(!r)
    return;
    queue<node *>q;
    q.push(r);
    while(!q.empty()){
        int s=q.size();
        node *x=q.front();
        cout<<x->data<<" ";
        q.pop();
        if(x->left)
        q.push(x->left);
        if(x->right)
        q.push(x->right);
    }
}
bool complete(node *r){
    if(!r)
    return true;
    queue<node *>q;
    q.push(r);
    bool flag=true;
    while(!q.empty()){
        node *x=q.front();
        q.pop();
        if(!x){
          flag=false;  
        }
        else{
        if(!flag)
        return 0;
        q.push(x->left);
        q.push(x->right);
        }
    }
     return 1;
}
int main(){
    struct tree *root=newNode(9);
    root->left=newNode(6);
    root->right=newNode(7);
    root->left->left = newNode(4);
    root->left->right = newNode(5);
    root->right->right = newNode(4);
    level(root);
    diameter(root);
    cout<<"Tree Is Complete? : "<<complete(root);
    return 0;
}
