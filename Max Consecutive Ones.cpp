class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int s=0;
        int max=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1)
            {
                ++s;
                if(s>max)
                    max=s;
            }
            else{
                s=0;
            }
        }
        return max;
}
};
