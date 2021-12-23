class Solution {
public:
    int mini(int x, int y, int z) { 
        return min(min(x, y), z); 
    }
    int minDistance(string word1, string word2) {
        int dp[501][501];
        memset(dp,-1,sizeof(dp));
        int n=word1.size();
        int m=word2.size();
        for(int i=0;i<=n;i++){
            for(int j=0;j<=m;j++){
                if(i==0||j==0){
                if(i==0)
                    dp[i][j]=j;
                else 
                    dp[i][j]=i;
                }
                else if(word1[i-1]==word2[j-1])
                    dp[i][j]=dp[i-1][j-1];
                else
                    dp[i][j]=1+mini(dp[i][j-1],dp[i-1][j],dp[i-1][j-1]);
            }
        }
        return dp[n][m];
    }
};
