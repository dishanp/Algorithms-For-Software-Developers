class Solution {
public:
    bool canConstruct(string r, string m) {
        unordered_map<char,int>u;
        for(int i=0;i<m.size();i++)
            u[m[i]]++;
        for(int i=0;i<r.size();i++){
            if(u[r[i]]<1)
            return false;
            if(u[r[i]])
            --u[r[i]];
        }
        return true;
    }
};
