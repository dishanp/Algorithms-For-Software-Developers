class Solution {
public:
    int maxProduct(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        return (nums[nums.size()-1]-1)*(nums[nums.size()-2]-1);
    }
};

//OR

class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int f=INT_MIN;
        int s=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>=f){
                s=f;
                f=nums[i];
            }
            if(nums[i]>s&&nums[i]<f){
                s=nums[i];
            }
        }
        return (f-1)*(s-1);
    }
};
