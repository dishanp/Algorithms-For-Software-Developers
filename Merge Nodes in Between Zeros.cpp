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
    ListNode* mergeNodes(ListNode* head) {
        ListNode* p=head;
        p=p->next;
        ListNode* l=new ListNode(0);
        ListNode* res=l;  
        int sum=0;
        while(p){
            if(p->val!=0)
            {
                sum+=p->val;
            }
            else{
                ListNode* temp=new ListNode(sum);
                l->next=temp;
                l=l->next;
                sum=0;
            }
            p=p->next;
        }
        return res->next;
    }
};
