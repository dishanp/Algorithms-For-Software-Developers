class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int>u;
        for(int i=0;i<nums.size();i++)
            u[nums[i]]++;
        for(int i=0;i<nums.size();i++)
        {
            if(u[nums[i]]>nums.size()/2)
                return nums[i];
        }
        return -1;
    }
};

//OR

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int ctr=1;
        int el=-1;
        if(nums.size()==1)
              return nums[0];
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]==nums[i+1]){
                ctr++;
                if(ctr>nums.size()/2)
                    el=nums[i];
            }
            else{
                ctr=1;
            }
        }
        return el;
    }
};
