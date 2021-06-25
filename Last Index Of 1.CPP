class Solution{
    public:
    int lastIndex(string s) 
    {
        int l=-1;
        for(int i=0;i<s.size();i++){
            if(s[i]=='1')
            l=i;
        }
        return l;
    }

};
