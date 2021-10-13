class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int n=word1.size();
        int m=word2.size();
        int i=0;
        int j=0;
        int k=0;
        int f=0;
        string res;
        while(i<n&&j<m){
            if(i>=n||j>=m)
                break;
            else{
            if(f%2==0){
                res+=word1[i];
                ++i;
                ++f;
            }
            else{
                res+=word2[j];
                ++j;
                ++f;
            }
        }
    }
        for(;i<n;i++)
            res+=word1[i];
        for(;j<m;j++)\
            res+=word2[j];
        return res;
    }
};
