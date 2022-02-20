class Solution {
public:
    int twosum(vector<int>nums,int k){
        int ctr=0;
        sort(nums.begin(),nums.end());
        int i=0;
        int j=nums.size()-1;
        while(i<j){
            if(nums[i]+nums[j]==k){
                ++ctr;
                ++i;
                --j;
                continue;
            }
            else if(nums[i]+nums[j]>k)
            {
                --j;
            }
            else{
                ++i;
            }
        }
        return ctr;
    }
    int maxOperations(vector<int>& nums, int k) {
        return twosum(nums,k);
    }
};
