class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
       unordered_map<int,int>u;
        vector<int> res;
        for(int i=0;i<nums.size();i++)
        {
            u[nums[i]]++;
        }
        for(int i=0;i<u.size();i++)
        {
            if(u[i]==2)
                res.push_back(i);
        }
        return res; 
}
};
