#include <stdio.h>
#include<stdlib.h>

struct tree
{
    int data;
    struct tree *left;
    struct tree *right;
};
int c;
struct tree *root=NULL;
void insert(struct tree *t,int key)
{
    struct tree *r=NULL;
    while(t)
    {
        r=t;
        if(key==t->data)
        return;
        if(key>t->data)
        t=t->right;
        else
        t=t->left;
    }
    struct tree *p=( struct tree *)malloc(sizeof( struct tree));
    p->data=key;
    p->left=p->right=NULL;
    if(p->data>r->data)
    r->right=p;
    else
    r->left=p;
}
void create(int n)
{
    int x;
    for(int i=0;i<n;i++)
    {
    printf("\nEnter Data of Node %d :  ",i+1);
    scanf("%d",&x);
    insert(root,x);
    }
    printf("\n");
        
}
void inorder(struct tree *t)
{
    if(t)
    {
        inorder(t->left);
        printf("%d ",t->data);
        inorder(t->right);
    }
}
struct tree *nMaximum(struct tree *t)
{
    while(t->right)
    t=t->right;
    return t;
}
struct tree *delete(struct tree *t,int key)
{
    struct tree *temp;
    if(!t)
    return t;
    if(key<t->data)
    t->left=delete(t->left,key);
    else if(key>t->data)
    t->right=delete(t->right,key);
    else
    {
        if(t->left==NULL)
        {
           temp=t->right;
           free(t);
           return temp;
        }
        else if(t->right==NULL)
        {
            temp=t->left;
            free(t);
            return temp;
        }
        temp=nMaximum(t->left);
        t->data=temp->data;
        t->left=delete(t->left,temp->data);
        
    }
    return t;
}
int search(struct tree *t)
{
    printf("\n Enter element to be Searched : ");
    int x;
    scanf("%d",&x);
    if(!t)
    return 0;
    while(t)
    {
      if(x==t->data)
      return 1;
      else if(x<t->data)
      t=t->left;
      else
      t=t->right;
    }
    return 0;
}
int main()
{
    int n;
    root=( struct tree *)malloc(sizeof( struct tree ));
    printf("Enter Root Node Data :  ");
    scanf("%d",&root->data);
    root->left=root->right=NULL;
    printf("\nEnter No Of Nodes In BST:  ");
    scanf("%d",&n);
    create(n);
    inorder(root);
    printf("\n");
    if(search(root))
    printf("\nElement is present in BST ! \n");
    else
    printf("\nElement is not present in BST ! \n");
 printf("Enter element for deletion: ");
 int a;
 scanf("%d",&a);
 delete(root,a);
 inorder(root);
    return 0;
}



