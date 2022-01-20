class Solution {
public:
    bool util(string l,string s){
        if(s=="")
            return true;
        int j=0;
        for(int i=0;i<l.size();i++){
            if(s[j]==l[i])
                ++j;
            if(j==s.size())
                return true;
        }
        return false;
    }
int numMatchingSubseq(string S, vector<string>& words) {
        
        int c = 0;
        unordered_map<string, int>mp;
        for (int i = 0; i < words.size(); i++)
            mp[words[i]]++;
            
        for (auto it = mp.begin(); it != mp.end(); it++) {
            if (util(S, it->first))
                c += it->second;
        }
        
        return c;
    }
};
