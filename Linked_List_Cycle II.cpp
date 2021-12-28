/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode *p=head;
        ListNode *q=head;
        ListNode *x=head;
        while(p&&q&&p->next){
            q=q->next;
            p=p->next->next;
            if(p==q){
                while(x!=p){
                    x=x->next;
                    p=p->next;
                }
                return x;
            }
        }
        return 0;
    }
};
