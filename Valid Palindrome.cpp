class Solution {
public:
    bool isPalindrome(string s) {
        string str="";
        for(char ch:s){
            int a=(int)ch;
            if(a>=97&&a<=122)
                str+=ch;
            if(a>=48&&a<=57)
                str+=ch;
            if(a>=65&&a<=90)
            {
                ch+=32;
                str+=ch;
            }
        }
        int i=0;
        int j=str.size()-1;
        while(i<=j){
            if(str[i]!=str[j])
                return false;
            else{
                ++i;
                --j;
            }
        }
        return true;
    }
};
