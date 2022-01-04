class Solution {
public:
    int climbStairs(int n) {
        vector<int>dp(50,-1);
        return util(n,dp);
    }
    int util(int n,vector<int>&dp){
        if(dp[n]!=-1)
            return dp[n];
        if(n==1)
            return dp[n]=1;
        if(n==2)
            return dp[n]=2;
        return dp[n]=util(n-1,dp)+util(n-2,dp);
    }
};
