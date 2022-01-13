//Linked list:
using namespace std;
#include<bits/stdc++.h>
typedef struct ll{
    int data;
    struct ll *next;
}node;
node *create(int x){
    node *temp=new node();
    temp->data=x;
    temp->next=0;
    return temp;
}
void display(node *head){
    while(head){
        cout<<head->data<<" ";
        head=head->next;
    }
}
int main(){
    node *head=create(5);
    head->next=create(10);
    head->next->next=create(15);
    display(head);
    return 0;
}
