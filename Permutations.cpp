class Solution {
public:
    void util(vector<vector<int>>&ans,vector<int>&nums,int ind){
        if(ind==nums.size()){
            ans.push_back(nums);
            return;
        }
        for(int i=ind;i<nums.size();i++){
            swap(nums[ind],nums[i]);
            util(ans,nums,ind+1);
            swap(nums[ind],nums[i]);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>ans;
        util(ans,nums,0);
        return ans;
    }
};
