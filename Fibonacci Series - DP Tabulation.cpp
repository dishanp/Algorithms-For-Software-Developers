class Solution {
public:
    int util(int n,vector<int>&dp){
        if(dp[n]!=-1)
            return dp[n];
        if(n==0)
            return dp[n]=0;
        if(n==1)
            return dp[n]=1;
        return dp[n]=util(n-2,dp)+util(n-1,dp);
    }
    int fib(int n) {
        vector<int>dp(50,-1);
        return util(n,dp);
    }
};
