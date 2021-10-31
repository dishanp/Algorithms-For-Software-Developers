class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        if(nums.size()<=1)
            return 0;
        unordered_map<int,int>u;
        for(int i=0;i<nums.size();i++){
            u[nums[i]]++;
        }
        int res=0;
        for(auto it:u){
            int n=it.second;
            if(n<=1)
                continue;
            res+=(n*(n-1))/2;
        }
        return res;
    }
};
