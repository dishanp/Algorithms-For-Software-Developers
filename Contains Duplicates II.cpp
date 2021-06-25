class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int,int>u;
        for(int i=0;i<nums.size();i++)
        {
            if(!u[nums[i]])
              u[nums[i]]=i+1;
            else
            {
                if(abs(u[nums[i]]-i-1)<=k)
                    return true;
                else
                    u[nums[i]]=i+1;
            }
                
        }
        return false;
    }
};
