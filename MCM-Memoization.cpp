class Solution{
public:
int dp[101][101];
    int util(int p[],int i,int j){
        if(i==j)
        return 0;
        if(dp[i][j]!=-1)
        return dp[i][j];
        int k;
        dp[i][j]=INT_MAX;
        int count;
        for(k=i;k<j;k++){
            dp[i][j]=min(dp[i][j],util(p,i,k)+util(p,k+1,j)+p[i-1]*p[k]*p[j]);
        }
        return dp[i][j];
    }
    int matrixMultiplication(int N, int arr[])
    {
       memset(dp,-1,sizeof(dp));
       return util(arr,1,N-1);
    }
};
