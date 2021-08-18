long long int count( int wt[], int n, int v )
    {
       long long int dp[n+1][v+1];
       
       for(int i=0;i<v+1;i++)
       dp[0][i]=0;
       for(int j=0;j<n+1;j++)
       dp[j][0]=1;
       
       for(int i=1;i<n+1;i++){
           for(int j=1;j<v+1;j++){
               if(wt[i-1]>j)
                    dp[i][j]=dp[i-1][j];
               else
                    dp[i][j]=dp[i-1][j]+dp[i][j-wt[i-1]];
           }
       }
       return dp[n][v];
    }
