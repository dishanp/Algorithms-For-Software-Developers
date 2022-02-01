class Solution {
public:
    bool f(string s){
        int i=0;
        int j=s.size()-1;
        while(i<=j){
            if(s[i]!=s[j])
                return false;
            ++i;
            --j;
        }
        return 1;
    }
    string firstPalindrome(vector<string>& words) {
        for(auto i:words)
            if(f(i))
                return i;
        return "";
    }
};
