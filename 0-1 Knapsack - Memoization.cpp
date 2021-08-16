class Solution
{
public:
int dp[1001][1001] = {{0}};

int knapSack1(int W, int wt[], int val[], int n)
{
if (W == 0 || n == 0)
return 0; 

if (dp[n][W] != -1)
return dp[n][W]; 

if (wt[n - 1] > W)
return dp[n][W] = knapSack1(W, wt, val, n - 1); 

return dp[n][W] = max(val[n - 1] + knapSack1(W - wt[n - 1], wt, val, n - 1), knapSack1(W, wt, val, n - 1));
}
int knapSack(int W, int wt[], int val[], int n)
{
memset(dp, -1, sizeof(dp)); 
return knapSack1(W, wt, val, n);
}
};
