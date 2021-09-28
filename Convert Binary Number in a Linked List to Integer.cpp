class Solution {
public:
    ListNode* rev(ListNode *p){
        ListNode *q=0;
        ListNode *r=0;
        while(p){
            r=q;
            q=p;
            p=p->next;
            q->next=r;
        }
        return q;
    }
    int getDecimalValue(ListNode* head) {
        int res=0;
        int i=0;
        ListNode *p=rev(head);
        while(p){
            if(p->val==1)
            res+=pow(2,i);
            p=p->next;
            ++i;
        }
        return res;
    }
};
