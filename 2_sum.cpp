//O(n*n) Solution
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
         vector<int> a;
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                if((nums[i]+nums[j])==target){
                    a.push_back(i);
                    a.push_back(j);
                    return a;
                }
            }
        }
        return a;
    }
};

/* O(nlogn) Solution:
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> a;
        int n=nums.size();
        vector<int> nums1(nums);
        sort(nums.begin(),nums.end());
        int i=0;
        int j=n-1;
        int a1,a2;
        while(i<=j){
            if(nums[i]+nums[j]==target)
            {
               a1=nums[i];
               a2=nums[j];
                break;
            }
            else if(nums[i]+nums[j]<target)
            {
                i++;
            }
            else
            {
                j--;
            }
        }
        for(int i=0;i<nums1.size();i++)
        {
            if(nums1[i]==a1||nums1[i]==a2)
                a.push_back(i);
        }
        return a;
    }
};
*/
