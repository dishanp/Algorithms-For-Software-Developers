class Solution
{
    public:
    int l(struct node* h){
        int c;
        while(h){
            h=h->next;
            ++c;
        }
        return c;
    }
    struct node *reverse (struct node *head, int k)
    { 
        if(l(head)<k)
        return head;
        struct node *prev=0;
        struct node *next=0;
        struct node *curr=head;
        for(int i=0;i<k;i++){
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        head->next=reverse(curr,k);
        return prev;
    }
};
