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
    vector<int> nextLargerNodes(ListNode* head) {
        vector<int>res;
        if(!head)
            return res;
        vector<int>v;
        while(head)
        {
            v.push_back(head->val);
            head=head->next;
        }
        stack<int>st;
        for(int i=v.size()-1;i>=0;i--){
            while(!st.empty()&&v[i]>=st.top())
                st.pop();
            if(st.empty())
                res.push_back(0);
            else
                res.push_back(st.top());
            st.push(v[i]);
        }
        reverse(res.begin(),res.end());
        return res;
    }
};
