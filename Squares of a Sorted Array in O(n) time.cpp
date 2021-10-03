class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int>res(nums.size());
        int l=0;
        int r=nums.size()-1;
        int k=nums.size()-1;
        for(int i=nums.size()-1;i>=0;i--){
            if(abs(nums[l])>abs(nums[r])){
                res[i]=nums[l]*nums[l];
                ++l;
            }
            else{
                res[i]=nums[r]*nums[r];
                --r;
            }
        }
        return res;
    }
};
