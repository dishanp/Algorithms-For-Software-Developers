class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.size()!=t.size())
            return 0;
        unordered_map<char,char>u;
        unordered_map<char,char>m;
        for(int i=0;i<s.size();i++){
            if(!u[s[i]]&&!m[t[i]])
               { 
                 u[s[i]]=t[i];
                 m[t[i]]=s[i];
               }
            else
                if(u[s[i]]!=t[i])
                    return false;
                if(m[t[i]]!=s[i])
                    return false;
        }
        return 1;
    }
};
