int compare(Node *list1, Node *list2) 
{
     if(!list1&&!list2)
     return 0;
     if(list1&&!list2)
     return 1;
     if(!list1&&list2)
     return -1;
     while(list1&&list2){
         if(list1->c>list2->c)
           return 1;
         else if(list1->c<list2->c)
           return -1;
           list1=list1->next;
           list2=list2->next;
     }
     return 0;
}
