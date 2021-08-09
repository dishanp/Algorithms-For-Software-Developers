 int maximumSumSubarray(int k, vector<int> &nums , int N){
       int left=0;
       int sum=0;
       int res=INT_MIN;
       for(int i=0;i<N;i++){
              sum+=nums[i];
         if(i-left+1==k){
              res=max(res,sum);
              sum-=nums[left];
              ++left;
          }
       }
       return res;
    }
