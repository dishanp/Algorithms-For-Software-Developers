class Solution {
  public:
    long util(vector<int>&dp,int n){
        if(dp[n]!=-1)
        return dp[n];
        if(n==0){
            return 0;
        }
        if(n==1){
            return 1;
        }
        return dp[n]=(util(dp,n-1)+util(dp,n-2))%1000000007;
    }
    int firstElement(int n) 
    {
        vector<int>dp(n+1,-1);
        return util(dp,n);
    }
};
