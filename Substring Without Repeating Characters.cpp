class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int left=0;
        int res=0;
        int len=0;
        unordered_map<char,int>u;
        for(int i=0;i<s.size();i++){
            u[s[i]]++;
            if(u.size()==i-left+1)
                res=max(res,i-left+1);
            while(u.size()<i-left+1){
                u[s[left]]--;
                if(u[s[left]]==0)
                u.erase(s[left]);
                ++left;
            }
        }
        return res;
    }
};
