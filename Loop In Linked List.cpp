class Solution
{
    public:
    //Function to check if the linked list has a loop.
    bool detectLoop(Node* head)
    {
        if(!head)
        return false;
        Node *p=head;
        Node *q=head;
        while(p&&q&&p->next){
            p=p->next->next;
            q=q->next;
            if(p==q)
            return true;
        }
        return false;
    }
};
