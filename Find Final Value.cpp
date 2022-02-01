class Solution {
public:
    int findFinalValue(vector<int>& nums, int x) {
        for(int i=0;i<nums.size();i++){
            if(nums[i]==x){
                return findFinalValue(nums,2*x);
            }
        }
        return x; 
}
};
