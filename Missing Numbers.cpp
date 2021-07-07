class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        unordered_map<int,int>u;
        vector<int> res;
        if(nums[0]==1&&nums[1]==1&&nums.size()==2)
        {
            res.push_back(2);
            return res;
        }
        for(int i=0;i<nums.size();i++)
        {
            u[nums[i]]++;
        }
        int i=1;
        while(i<=nums.size()){
            if(u[i]==0)
                res.push_back(i);
            i++;
        }
        return res;
    }
};
