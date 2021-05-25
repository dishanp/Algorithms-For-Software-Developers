class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int max_so_far=INT_MIN;
        int max_end=0;
        for(int i=0;i<nums.size();i++){
            max_end+=nums[i];
            if(max_so_far<max_end)
                max_so_far=max_end;
            if(max_end<0)
                max_end=0;
        }
        return max_so_far;
    }
};
