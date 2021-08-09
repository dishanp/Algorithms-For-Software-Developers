class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int left=0;
        int res=INT_MAX;
        int sum=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            while(sum>=target){
                res=min(res,i+1-left);
                sum-=nums[left];
                left++;
            }
        }
        if(res!=INT_MAX)
        return res;
        else return 0;
    }
};
