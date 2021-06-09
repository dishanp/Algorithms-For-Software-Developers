class Solution {
public:
    bool isAnagram(string s, string t) {
       unordered_map<char,int>u;
        for(int i=0;i<s.size();i++)
            u[s[i]]++;
        for(int i=0;i<t.size();i++)
        {
            u[t[i]]--;       
        }
        for(int i=0;i<u.size();i++)
        {
            if(u[i]!=0)
                return false;
        }
        return true;       
    }
};
