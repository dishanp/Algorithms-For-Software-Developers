#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct stack
{
   int *data;
    int top;
    int size;
    int *freq;
};
void push(struct stack *s,int ch)
{
    if(s->top==s->size-1)
    {
        printf("OVERFLOW ! \n");
        return ;
    }
    s->data[++s->top]=ch;
    ;
}
int pop(struct stack *s)
{
    if(s->top==-1)
    {
        printf("UNDERFLOW! \n");
        return ;
    }
    int ch=s->data[s->top];
    s->top--;
    return ch;
}
void inc_count(struct stack *s,int c,int el)
{
    for(int i=s->top;i>=0;i--)
    {
        if(s->data[i]==el)
        {
            s->freq[i]=c;
        }
    }
}
int main()
{
    struct stack s;
    s.top=-1;
    printf("Enter STACK SIZE - \n ");
    scanf("%d",&s.size);
    s.data=(int *)malloc(s.size * sizeof(int));
    s.freq=(int *)malloc(s.size * sizeof(int));
    int en;
    int h[100]={0}; //hash table
    for(int i=0;i<s.size;i++)
    {
        printf("Enter element no %d (max val 100) = ",i+1);
        scanf("%d",&en);
        ++h[en];
        int nc=h[en];
        if(h[en]==1)
        {
        push(&s,en);
        inc_count(&s,nc,en);
        }
        else
        {
            inc_count(&s,nc,en);
        }
    }
    printf("\n\n");
    printf("STACK ELEMENT           FREQUENCY \n");
    for(int i=s.top;i>=0;i--)
    {
        printf("%d                        ( %d ) \n",s.data[i],s.freq[i]);
    }
    return 0;
}
