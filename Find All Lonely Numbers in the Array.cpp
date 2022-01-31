class Solution {
public:
    vector<int> findLonely(vector<int>& nums) {
        unordered_map<int,int>u;
        vector<int>res;
        for(int i:nums)
            u[i]++;
        for(int i=0;i<nums.size();i++){
            if(u[nums[i]]==1 &&u[nums[i]-1]==0 &&u[nums[i]+1]==0){
                res.push_back(nums[i]);
            }
        }
        return res;
    }
};
