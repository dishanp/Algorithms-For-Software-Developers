#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    struct node *left;
    struct node *right;
};
node * newnode(int x){
    node *n=new node();
    n->data=x;
    n->left=n->right=0;
    return n;
}
int height(node *t){
    if(!t)
    return 0;
    int x=height(t->left);
    int y=height(t->right);
    if(x>y)
    return x+1;
    return y+1;
}
void lev(node *t,int x){
    if(!t)
    return;
    if(x==1)
    std::cout << t->data <<" ";
    else if(x>1)
    {
        lev(t->left,x-1);
        lev(t->right,x-1);
    }
}
void level(node *t){
    int h=height(t);
    for(int i=1;i<=h;i++)
    lev(t,i);
}
void que_lev(node *root){
    queue<node*>q;
    if(!root)
    return;
    q.push(root);
    while(!q.empty()){
        node *n=q.front();
        cout<<n->data<<" ";
        q.pop();
        if(n->left)
        q.push(n->left);
        if(n->right)
        q.push(n->right);
    }
}
int main()
{
    cout<<"Level order traversal:"<<endl;
    node *root=newnode(5);
    root->left=newnode(3);
    root->right=newnode(4);
    root->right->left=newnode(2);
    root->right->right=newnode(1);
    cout<<"Using Recursion: ";
    level(root);
    cout<<endl;
    cout<<"Using Queue: ";
    que_lev(root);
    return 0;
}
