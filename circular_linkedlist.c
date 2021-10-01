#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node *next;
};
struct node *head=NULL;

void create(struct node **h,int n)
{
    struct node *curr,*ptr;
    int i;
    for(i=0;i<n;i++)
    {
        printf("enter the element=");
        curr=(struct node*)malloc(sizeof(struct node));
        scanf("%d",&curr->data);
        curr->next=NULL;
        if(*h==NULL)
        {
            head=curr;
            ptr=curr;
            head->next=head;
        }
        else
            {
                curr->next=*h;
                ptr->next=curr;
                ptr=curr;
            }
    }
}
void insert(struct node **h,int v,int p)
{
    struct node *curr,*ptr;
    curr=(struct node*)malloc(sizeof(struct node));
    curr->data=v;
    curr->next=NULL;

    if(*h==NULL)
    {
        *h=curr;
        curr->next=curr;
    }
    else if(p==0)
    {
        for(ptr=*h;ptr->next!=*h;ptr=ptr->next)
        {
            curr->next=*h;
            ptr->next=curr;
            *h=curr;
        }
    }
    else
    {
        ptr=*h;
        int i=1;
        while(i<p)
        {
            ptr=ptr->next;
            i++;
        }
        curr->next=ptr->next;
        ptr->next=curr;
    }
}

int Length(struct node *p)
{
 int len=0;
 do
 {
 len++;
 p=p->next;

 }while(p!=head);
 return len;
}

void delete(struct node **h,int p)
{
    struct node *ptr,*prev;

    if(*h==NULL)
    {
        printf("EMPTY");
    }
    else
        {
            ptr=*h;
            int i=1;
            while(i<p&&ptr->next!=*h)
            {
                prev=ptr;
                ptr=ptr->next;
                i++;
            }
            if(i<p)
            {
                printf("NOT FOUND");
            }
            else if((*h)->next==*h)
            {
                *h=NULL;
                free(ptr);
            }
            else if(p==1)
                for(prev=*h;prev->next!=*h;prev=prev->next)
                {
                    prev->next=ptr->next;
                    *h=ptr->next;
                    free(ptr);
                }
                else
                {
                    prev->next=ptr->next;
                    free(ptr);
                }
            }

}
void Display(struct node *h)
{
 do
 {
 printf("%d ",h->data);
 h=h->next;
 }while(h!=head);
 printf("\n");
}
int main()
{
     struct node *l;
int n;
l=(struct node*)malloc(sizeof(struct node));
printf("enter number of node\n");
scanf("%d",&n);
create(&head,n);
Display(head);
insert(&head,30,7);
Display(head);
delete(&head,5);
Display(head);
printf("Length is %d \n",Length(head));
Display(head);
}
