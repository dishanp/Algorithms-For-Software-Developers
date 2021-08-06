class Solution {
public:    
    int dp[1000 + 1][1000 + 1];
    
    int maxLen(string& s1, string& s2, int n, int m)
    {
        if (s1[n] == '\0' || s2[m]=='\0')
            return 0;
        
        if (dp[n][m] != -1)
            return dp[n][m];

        if (s1[n] == s2[m]){
             dp[n][m] = 1 + maxLen(s1, s2, n +1, m+1);
            return dp[n][m];
        }
        else
            dp[n][m] = max(maxLen(s1, s2, n, m+1), maxLen(s1, s2, n + 1, m));
        return dp[n][m];
    }
        
    int longestCommonSubsequence(string s1, string s2) 
    {
        memset(dp, -1, sizeof(dp));        
        return maxLen(s1, s2, 0, 0);
    }
};
