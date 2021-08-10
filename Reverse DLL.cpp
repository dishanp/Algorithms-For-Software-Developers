Node* reverseDLL(Node * head)
{
    Node *p=head;
    Node *temp=0;
    while(p){
        temp=p->next;
        p->next=p->prev;
        p->prev=temp;
        p=p->prev;
        if(p&&p->next==0)
        {
            head=p;
        }
    }
    return head;
}
