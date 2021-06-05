class Solution {
public:
    bool isValid(string s) {
        stack<int>st;
        for(int i=0;i<s.size();i++){
            if(s[i]=='{'||s[i]=='('||s[i]=='['){
                st.push(s[i]);
                continue;
            }
            if(st.empty())
                return false;
            if(s[i]==')'){
                char x=st.top();
                st.pop();
                if(x=='['||x=='{'){
                    return false;
                }
            }
            if(s[i]=='}'){
                char x=st.top();
                st.pop();
                if(x=='['||x=='('){
                    return false;
                }
            }
            if(s[i]==']'){
                char x=st.top();
                st.pop();
                if(x=='{'||x=='('){
                    return false;
                }
            }
        }
        return st.empty();
    }
};
