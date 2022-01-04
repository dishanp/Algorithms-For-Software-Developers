// dp memoization - top down approach

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

// DP tabulation - bottom up approach

class Solution {
public:
    int climbStairs(int n) {
        vector<int>dp(50,-1);
        dp[0]=1;
        dp[1]=2;
        for(int i=2;i<n;i++){
            dp[i]=dp[i-1]+dp[i-2];
        }
        return dp[n-1];
    }
};
