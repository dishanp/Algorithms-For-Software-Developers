class Solution{
  public:
    int longestKSubstr(string s, int k) {
        int left=0;
        int res=-1;
        int len=0;
        unordered_map<char,int>u;
        for(int i=0;i<s.size();i++){
            u[s[i]]++;
            if(u.size()==k)
                res=max(res,i-left+1);
            while(u.size()>k){
                u[s[left]]--;
                if(u[s[left]]==0)
                u.erase(s[left]);
                ++left;
            }
        }
        return res;
    }
};
