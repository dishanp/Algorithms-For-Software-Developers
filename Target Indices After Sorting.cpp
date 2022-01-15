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
    vector<int> targetIndices(vector<int>& nums, int x) {
        vector<int>res;
        sort(nums.begin(),nums.end());
        int f=first(nums,x);
        int l=last(nums,x);
        if(f==-1&&l==-1)
            return res;
        for(int i=f;i<=l;i++){
                res.push_back(i);
        }
            return res;
    }
};
