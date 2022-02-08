class Solution {
public:
    ListNode* removeElements(ListNode* head, int v) {
        ListNode* p=head;
        ListNode* temp=head;
        if(p&&p->val==v){
            while(p&&p->val==v){
                temp=p;
                p=p->next;
                delete(temp);
            }
        }
        ListNode* f=p;
        ListNode* q=0;
        ListNode* te;
        while(p){
            if(p->val==v){
                te=p;
                q->next=te->next;
                p=q->next;
            }
            else
            {
                q=p;
                p=p->next;
            }
        }
        return f ;
    }
};
