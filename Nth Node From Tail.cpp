int len(Node *head){
    int l=0;
    while(head){
       head=head->next;
       l++;
    }
    return l;
}
//Function to find the data of nth node from the end of a linked list.
int getNthFromLast(Node *head, int n)
{
       
       int l=len(head);
       if(l<n)
       return -1;
       int pos=l-n-1;
       for(int i=0;i<=pos;i++){
         head=head->next;
       }
         return head->data;
}
