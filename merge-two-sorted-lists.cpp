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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        if(!l1&&!l2)
            return nullptr;
        if(!l1&&l2)
            return l2;
        if(l1&&!l2)
            return l1;
        ListNode *h=new ListNode();
        ListNode *t=new ListNode();
        if(l1->val>l2->val){
            h=t=l2;
            l2=l2->next;
            h->next=0;
        }
        else{
            h=t=l1;
            l1=l1->next;
            h->next=0;
        }
        while(l1&&l2){
            if(l1->val<l2->val){
                t->next=l1;
                t=l1;
                l1=l1->next;
                t->next=0;
            }
            else{
                t->next=l2;
                t=l2;
                l2=l2->next;
                t->next=0;
            }
        }
        if(l1)
            t->next=l1;
        else if(l2)
            t->next=l2;
        return h;
    }
};
