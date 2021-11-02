class Solution {
public:
    vector<vector<int>>res;
    vector<int>curr;
    int sum;
    void util(vector<int>&nums,int ind,int tar)
    {
        if(sum>tar)
            return ;
        if(sum==tar){
            res.push_back(curr);   
        }
        for(int i=ind;i<nums.size();i++){
            if(i>ind&&nums[i]==nums[i-1])
                continue;
            sum+=nums[i];
            curr.push_back(nums[i]);
            util(nums,i+1,tar);
            sum-=nums[i];
            curr.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sum=0;
        sort(candidates.begin(),candidates.end());
        util(candidates,0,target);
        return res;
    }
};
