class Solution {
public:
    int countPrimes(int n) {
        bool a[n+1];
        int ctr=0;
        memset(a,true, sizeof(a));
        for(int i=2;i*i<=n;i++){
            if(a[i]==true){
                for(int j=i*i;j<=n;j+=i){
                    a[j]=false;
                }
            }
        }
        for(int i=2;i<n;i++){
            if(a[i]==true)
                ++ctr;
        }
        return ctr;
    }
};
