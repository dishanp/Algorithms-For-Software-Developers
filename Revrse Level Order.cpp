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
    for(int i=h;i>=1;i--)
    lev(t,i);
}
void que_lev(node *root){
    queue<node*>q;
    std::stack<node *>s ;
    if(!root)
    return;
    q.push(root);
    while(!q.empty()){
        node *n=q.front();
        q.pop();
        s.push(n);
        if(n->right)
        q.push(n->right);
        if(n->left)
        q.push(n->left);
    }
    while (s.empty() == false)
    {
        node *st = s.top();
        cout << st->data << " ";
        s.pop();
    }
}
int main()
{
    cout<<"Reverse Level order traversal:"<<endl;
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
