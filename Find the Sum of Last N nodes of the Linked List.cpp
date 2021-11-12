struct Node* rev(struct Node* head){
        struct Node* p=head;
        struct Node* q=0;
        struct Node* r=0;
        while(p){
            r=q;
            q=p;
            p=p->next;
            q->next=r;
        }
        return q;
    }
int sumOfLastN_Nodes(struct Node* head, int n)
{
      struct Node* p=rev(head);
      int i=0;
      int sum=0;
      while(i<n&&p){
          sum+=p->data;
          p=p->next;
          ++i;
      }
      return sum;
}
