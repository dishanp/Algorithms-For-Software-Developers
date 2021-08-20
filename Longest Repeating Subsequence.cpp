	int dp[1001][1001];
	    int lcs(string a,string b){
	        int l1=a.size();
	        int l2=b.size();
	        for(int i=0;i<l1+1;i++){
	            for(int j=0;j<l2+1;j++){
	                if(i==0||j==0)
	                dp[i][j]=0;
	                else if(a[i-1]==b[j-1]&&i!=j)
	                dp[i][j]=1+dp[i-1][j-1];
	                else
	                dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
	            }
	        }
	        return dp[l1][l2];
	    }
		int LongestRepeatingSubsequence(string str){
		    memset(dp,-1,sizeof(dp));
		    return lcs(str,str);
		}
