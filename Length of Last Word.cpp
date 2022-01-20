class Solution {
public:
    int lengthOfLastWord(string s) {
        istringstream ss(s);
        string word;
        int res;
        while(ss>>word)
            res=word.size();
        return res;
    }
};
