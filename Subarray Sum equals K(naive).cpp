class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int ctr=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                int sum=0;
                for(int k=i;k<=j;k++){
                    sum+=nums[k];
                }
                if(sum==k)
                    ++ctr;
            }
        }
        return ctr;
    }
};
