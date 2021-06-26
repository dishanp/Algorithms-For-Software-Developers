class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int p1=nums[0]*nums[1]*nums[n-1];
        int p=nums[n-1]*nums[n-2]*nums[n-3];
        if(p>p1)
            return p;
        return p1;
    }
};
