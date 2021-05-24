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
    ListNode* middleNode(ListNode* head) {
        ListNode* p =head;
        ListNode* q=head;
        while(p){
            p=p->next;
            if(p)
            {  
             p=p->next;
            }
            if(p)
            q=q->next;
        }
        if(len(head)%2!=0)
        return q;
        return q->next;
    }
    int len(ListNode *p){
        int l=0;
        while(p){
            p=p->next;
            l++;
        }
        return l;
    }
};
