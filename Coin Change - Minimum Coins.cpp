class Solution {
public:
    int coinChange(vector<int>& wt, int v) {
        int n=wt.size();
        long long dp[n+1][v+1];
        
    for (int i = 0; i <= n; i++)
        dp[i][0] = 0;
    for (int j = 1; j <= v; j++)
        dp[0][j] = INT_MAX;
        
        for(int i=1;i<n+1;i++){
            for(int j=1;j<v+1;j++){
                if(wt[i-1]>j)
                    dp[i][j]=dp[i-1][j];
                else
    dp[i][j]=min(dp[i-1][j],1+dp[i][j-wt[i-1]]);
            }
        }
        if (dp[n][v] == INT_MAX)
            return -1;
        return dp[n][v];
}
};
