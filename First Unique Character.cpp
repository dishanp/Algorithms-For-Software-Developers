class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char,int>u;
        bool f=false;
        for(int i=0;i<s.size();i++){
            u[s[i]]++;
        }
        for(int i=0;i<s.size();i++){
            if(u[s[i]]==1){
                f=true;
                return i;
            }
        }
        
            return -1;
    }
};
