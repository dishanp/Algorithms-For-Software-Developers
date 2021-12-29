class Solution {
public:
    int dp[100][10000];
    int util(int e,int f){
        int res=INT_MAX;
        if(dp[e][f]!=-1)
            return dp[e][f];
        if(f==0||f==1)
            return dp[e][f]=f;
        if(e==1)
            return dp[e][f]=f;
        for(int k=1;k<=f;k++){
            int temp=1+max(superEggDrop(e-1,k-1),superEggDrop(e,f-k));
            res=min(res,temp);
        }
        return dp[e][f]=res;
    }
    int superEggDrop(int e, int f) {
        memset(dp,-1,sizeof(dp));
        return util(e,f);   
    }
};
