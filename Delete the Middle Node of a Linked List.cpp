/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode *middle(ListNode *head){
        if(!head)
            return 0;
         ListNode *p=head;
         ListNode *q=head;
         while(p&&p->next){
             q=q->next;
             p=p->next;
             p=p->next;
         }
        return q;
    }
    ListNode* deleteMiddle(ListNode* head) {
        if(!head||head->next==0)
            return 0;
        ListNode *x=middle(head);
        ListNode *y=head;
        ListNode *prev=0;
        while(y){
            if(x==y){
                prev->next=y->next;
                delete(y);
                break;
            }
            prev=y;
            y=y->next;
        }
        return head;
    }
};
