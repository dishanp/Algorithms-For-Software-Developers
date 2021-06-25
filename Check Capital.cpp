class Solution {
public:
    bool detectCapitalUse(string word) {
        int u=0;
        int l=0;
        for(int i=0;i<word.size();i++){
            if(word[i]>=65&&word[i]<=90)
                u++;
            else  if(word[i]>=97&&word[i]<=122)
                l++;
        }
        if(u==word.size()||l==word.size())
            return true;
if(word[0]>=65&&word[0]<=90&&word.size()-1==l)
            return true;
        return false;
    }
};
