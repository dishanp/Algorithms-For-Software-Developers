/*
Given a sorted array of distinct integers and a target value, return the index if the target is found.
If not, return the index where it would be if it were inserted in order.
*/
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        for(int i=0;i<nums.size();i++){
            if(nums[i]==target)
                return i;
        }
        int n=nums.size();
        if(nums[0]>target)
                return 0;
        if(nums[n-1]<target)
            return n;
        if(n==2&&nums[0]<target&&nums[n-1]>target)
            return 1;
        for(int i=1;i<nums.size();i++){
            if(nums[i]>target&&target>nums[i-1])
                return i;
        }
        return -1;
    }
};
