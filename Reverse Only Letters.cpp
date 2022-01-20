class Solution {
public:
    bool a(char ch){
        int i=(int)ch;
        return (i>=65&&i<=90 ) || (i>=97&&i<=122);
    }
    string reverseOnlyLetters(string s) {
        int i=0;
        int j=s.size()-1;
        while(i<j){
            if(a(s[i]) && a(s[j]))
                {
                swap(s[i],s[j]);
                ++i;
                --j;
                continue;
                }
            else if(a(s[i])&&!a(s[j])){
                --j;
            }
            else if(!a(s[i])&&a(s[j])){
                ++i;
            }
            else{
                ++i;
                --j;
            }
        }
        return s;
    }
};
