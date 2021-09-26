bool compute(Node* root)
{
   Node *p=root;
   string str="";
   while(p){
       str+=p->data;
       p=p->next;
   }
   int i=0;
   int j=str.size()-1;
   while(i<j){
       if(str[i]==str[j]){
           i++;
           j--;
           continue;
       }
       return false;
   }
   return true;
}
