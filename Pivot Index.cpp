class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int sum=0;
        int rsum=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            sum=rsum=0;
            for(int j=0;j<i;j++)
                sum+=nums[j];
            for(int k=i+1;k<n;k++)
                rsum+=nums[k];
            if(rsum==sum)
                return i;
        }
        return -1;
    }
};
