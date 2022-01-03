class Solution{
    public:
    int maxLen(vector<int>&a, int n)
    {   
        int ctr=0;
        int sum=0;
        unordered_map<int,int>u;
        for(int i=0;i<n;i++){
            sum+=a[i];
            if(sum==0){
                ctr=i+1;
            }else{
                if(u.find(sum)!=u.end()){
                    ctr=max(ctr,i-u[sum]);
                }
                else{
                    u[sum]=i;
                }
            }
        }
        return ctr;
    }
};
