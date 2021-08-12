class Solution {
public:
    void util(vector<vector<int>>&ans,vector<int>&nums,int ind){
        if(ind==nums.size()){
            if(find(ans.begin(),ans.end(),nums)==ans.end())
            ans.push_back(nums);
            return;
        }
        for(int i=ind;i<nums.size();i++){
            swap(nums[ind],nums[i]);
            util(ans,nums,ind+1);
            swap(nums[ind],nums[i]);
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>>ans;
        util(ans,nums,0);
        return ans;
}
};
