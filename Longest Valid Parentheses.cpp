class Solution {
public:
    int longestValidParentheses(string s) {
        int o=0;
        int c=0;
        int res=0;
        int len=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='(')
                ++o;
            else
                ++c;
            if(o==c)
            {
                len=o+c;
                res=max(res,len);
            }
            if(c>o)
                o=c=0;
        }
        o=c=0;
        for(int i=s.size()-1;i>=0;i--){
             if(s[i]=='(')
                ++o;
            else
                ++c;
            if(o==c)
            {
                len=o+c;
                res=max(res,len);
            }
            if(o>c)
                o=c=0;
        }
        return res;
    }
};
