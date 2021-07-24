class Solution
{
    public:
    //Function to remove a loop in the linked list.
    void removeLoop(Node* head)
    {
        Node *s=head;
        Node *f=head;
        bool found=false;
        while(f&&s&&f->next){
            s=s->next;
            f=f->next->next;
            if(f==s){
              found=true;
              break;
            }
        }
        if(!found)
        return;
        int len=1;
        f=head;
        while(f->next!=s){
            f=f->next;
            len++;
        }
        f=head;
        s=head;
        for(int i=0;i<len;i++)
        s=s->next;
        while(f!=s)
        {
            f=f->next;
            s=s->next;
        }
        while(s->next!=f)
        s=s->next;
        
        s->next=0;
        
    }
};
class Solution
{
    public:
    //Function to remove a loop in the linked list.
    void removeLoop(Node* head)
    {
        Node *s=head;
        Node *f=head;
        bool found=false;
        while(f&&s&&f->next){
            s=s->next;
            f=f->next->next;
            if(f==s){
              found=true;
              break;
            }
        }
        if(!found)
        return;
        int len=1;
        f=head;
        while(f->next!=s){
            f=f->next;
            len++;
        }
        f=head;
        s=head;
        for(int i=0;i<len;i++)
        s=s->next;
        while(f!=s)
        {
            f=f->next;
            s=s->next;
        }
        while(s->next!=f)
        s=s->next;
        
        s->next=0;
        
    }
};
