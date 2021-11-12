void printList(struct Node *head)
{
  struct Node *p=head;
  do{
      cout<<p->data<<" ";
      p=p->next;
  }while(p!=head);
}
