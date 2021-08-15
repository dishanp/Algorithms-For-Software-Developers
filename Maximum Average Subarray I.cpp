class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int left=0;
        int res=INT_MIN;
        int sum=0;
        for(int i=0;i<nums.size();i++){
           sum+=nums[i];
            if(k==i-left+1){
                res=max(res,sum);
                sum-=nums[left];
                left++;
            }
        }
        double ans=(res/1.0)/k;
        return ans;
    }
};
