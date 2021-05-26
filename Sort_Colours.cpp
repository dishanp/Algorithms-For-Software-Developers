/*
Given an array nums with n objects colored red, white, or blue, sort them in-place so that objects of the same color are adjacent, with the colors in the order red, white, and blue.

We will use the integers 0, 1, and 2 to represent the color red, white, and blue, respectively.
*/
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n1,n2,n3;
        n1=n2=n3=0;
       for(int i=0;i<nums.size();i++)
       {
           if(nums[i]==0){
               n1++;
           }
           else if(nums[i]==1){
               n2++;
           }
           else{
               n3++;
           }
       }
        for(int i=0;i<n1;i++)
            nums[i]=0;
        for(int i=n1;i<n1+n2;i++)
            nums[i]=1;
        for(int i=n1+n2;i<n1+n2+n3;i++)
            nums[i]=2;
        
    }
};
