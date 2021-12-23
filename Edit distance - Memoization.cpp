class Solution {
public:
    int dp[501][501];
    int mini(int x, int y, int z) { 
        return min(min(x, y), z); 
    }
    int util(string word1, string word2,int n,int m){
        if(dp[n][m]!=-1)
            return dp[n][m];
        if(n==0)
            return dp[n][m]=m;
        if(m==0)
            return dp[n][m]=n;
        if(word1[n-1]==word2[m-1])
            return dp[n][m]=util(word1,word2,n-1,m-1);
        return dp[n][m]=1+mini(util(word1,word2,n-1,m),
                    util(word1,word2,n,m-1),
                    util(word1,word2,n-1,m-1));
    }
    int minDistance(string word1, string word2) {
        int n=word1.size();
        int m=word2.size();
        memset(dp,-1,sizeof(dp));
        return util(word1,word2,n,m);
    }
    
};
