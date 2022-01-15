class Solution {
public:
    int last(vector<int>& nums,int x){
        int lo=0;
        int hi=nums.size()-1;
        int mid;
        int res=-1;
        while(lo<=hi){
            mid=lo+(hi-lo)/2;
            if(nums[mid]==x){
                res=mid;
                lo=mid+1;
            }
            else if(nums[mid]<x)
                lo=mid+1;
            else
                hi=mid-1;
        }
        return res;
    }
    int first(vector<int>& nums,int x){
        int lo=0;
        int hi=nums.size()-1;
        int mid;
        int res=-1;
        while(lo<=hi){
            mid=lo+(hi-lo)/2;
            if(nums[mid]==x){
                res=mid;
                hi=mid-1;
            }
            else if(nums[mid]<x)
                lo=mid+1;
            else
                hi=mid-1;
        }
        return res;
    }
    vector<int> searchRange(vector<int>& nums, int x)   {
        vector<int>res;
        res.push_back(first(nums,x));
        res.push_back(last(nums,x));
        return res;
    }
};
