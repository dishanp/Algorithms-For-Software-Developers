#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
    struct node *prev;
};
void create(struct node **head,struct node **last,int n)
{
    int el;
    struct node *t=NULL;
    for(int i=0;i<n;i++)
    {
        t=(struct node *)malloc(sizeof(struct node));
        printf("\n Enter Data No %d:",i+1);
        scanf("%d",&t->data);
        t->next=NULL;
        t->prev=NULL;
        if(i==0)
        {
            *head=*last=t;
            (*head)->next=t;
            (*head)->prev=t;
        }
        else
        {
            
            (*last)->next=t;
            t->prev=*last;
            *last=t;
            (*last)->next=(*head);
            (*head)->prev=t;
        }
        
    }
}
void display(struct node *p)
{
    struct node *f=p;
    printf("\n");
    do
    {
        printf(" %d -> ",p->data);
        p=p->next;
    }while(p!=f);
}
void insert(struct node **head,struct node **last)
{
    printf("Enter element for insertion: ");
    struct node *p=NULL;
    p=(struct node *)malloc(sizeof(struct node));
    scanf("%d",&p->data);
    p->next=p->prev=NULL;
    printf("\nEnter position for insertion: ");
    int pos;
    scanf("%d",&pos);
    if(pos==0)
    {
        p->next=*head;
        *head=p;
        (*head)->prev=*last;
        (*last)->next=p;
    }
    else
    {
    struct node *r=*head;
    for(int i=0;i<pos-1;i++)
    r=r->next;
    
     p->next=r->next;
     p->next->prev=p;
     r->next=p;
     p->prev=r;
    }
}
void delete( struct node **head, struct node **last,int pos)
{
     struct node *p;
     if(pos==0)
     {
         struct node *f=*head;
         *head=(*head)->next;
         (*last)->next=*head;
         (*head)->prev=*last;
         free(f);
     }
     else
     {
     for(int i=0;i<pos-2;i++)
     p=p->next;
     struct node *q=p->next;
     p->next=p->next->next;
     p->next->next->prev=p;
     free(q);
     }
}
int main()
{
    struct node *head,*last;
    int n;
    printf("Enter Size Of LL: ");
    scanf("%d",&n);
    create(&head,&last,n);
    display(head);
    //insert(&head,&last);
    //display(head);
    delete(&head,&last,3);
    display(head);
}
