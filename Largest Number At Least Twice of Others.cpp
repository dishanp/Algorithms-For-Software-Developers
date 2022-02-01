class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int maxi=INT_MIN;
        for(int i:nums)
            maxi=max(i,maxi);
        bool flag=true;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==maxi)
               continue;
            if(2*nums[i]<=maxi)
                continue;
            else
                return -1;
        }
        for(int i=0;i<nums.size();i++)
            if(nums[i]==maxi)
            return i;
        return -1;
    }
};
