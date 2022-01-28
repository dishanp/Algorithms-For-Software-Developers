class Solution {
public:
    ListNode* reverse(ListNode* p){
        ListNode* q=0;
        ListNode* r=0;
        while(p){
            r=q;
            q=p;
            p=p->next;
            q->next=r;
        }
        return q;
    }
    bool isPalindrome(ListNode* head) {
        if(!head)
            return 1;
        ListNode* p=head;
        ListNode* q=head;
        while(p&&p->next){
            p=p->next->next;
            q=q->next;
        }
        ListNode* temp=reverse(q);
        while(temp){
            if(head->val!=temp->val)
                return 0;
            head=head->next;
            temp=temp->next;
        }
        return 1;
    }
};
