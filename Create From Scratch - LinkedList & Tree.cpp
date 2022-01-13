//Linked list:
using namespace std;
#include<bits/stdc++.h>
typedef struct ll{
    int data;
    struct ll *next;
}node;
node *create(int x){
    node *temp=new node();
    temp->data=x;
    temp->next=0;
    return temp;
}
void display(node *head){
    while(head){
        cout<<head->data<<" ";
        head=head->next;
    }
}
int main(){
    node *head=create(5);
    head->next=create(10);
    head->next->next=create(15);
    display(head);
    return 0;
}

//Tree

using namespace std;
#include<bits/stdc++.h>
typedef struct t{
    int data;
    struct t *left;
    struct t *right;
}tree;
tree *create(int x){
    tree *temp=new tree();
    temp->data=x;
    temp->left=temp->right=0;
    return temp;
}
void inorder(tree *root){
    if(root){
        inorder(root->left);
        cout<<root->data<<" ";
        inorder(root->right);
    }
}
int main(){
    tree *root=create(5);
    root->left=create(10);
    root->right=create(10);
    root->left->left=create(20);
    root->right->right=create(20);
    inorder(root);
    return 0;
}
