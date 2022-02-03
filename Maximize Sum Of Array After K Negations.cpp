class Solution {
public:
    int largestSumAfterKNegations(vector<int>& nums, int k) {
        int sum=0;
        sort(nums.begin(),nums.end());
        while(k>0)
        {
            nums[0]= -1*nums[0];
            k--;
            sort(nums.begin(),nums.end());
        }
        for(int i=0;i<nums.size();i++)
        {
            sum= sum+nums[i];
        }
        return sum;
    }
};
