class Solution {
public:
    bool util(vector<int>wt,int n,int v){
        //0-1 knapsack approach
        bool dp[n+1][v+1];
        //Initialise Matrix:
        for(int i=1;i<v+1;i++)
            dp[0][i]=false;
        for(int i=0;i<n+1;i++)
            dp[i][0]=true;
        for(int i=1;i<n+1;i++){
            for(int j=1;j<v+1;j++){
                if(wt[i-1]>j)
                    dp[i][j]=dp[i-1][j];
                else
                dp[i][j]=dp[i-1][j]||dp[i-1][j-wt[i-1]];
            }
        }
        return dp[n][v];
    }
    bool canPartition(vector<int>& nums) {
        int sum=0;
        for(int i:nums)
            sum+=i;
        if(sum%2!=0)
            return false;
        return util(nums,nums.size(),sum/2);
    }
};
