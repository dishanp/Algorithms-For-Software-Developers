//Naive approach O(N2)

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int s=nums.size()/2;
        for(int i=0;i<nums.size();i++){
            int ctr=0;
            for(int j=i+1;j<nums.size();j++){
                if(nums[i]==nums[j]){
                    ++ctr;
                }  
            }
            if(ctr>=s)
                return nums[i];
        }
        return -1;
    }
};

//O(N) Space approach:

int majorityElement(int a[], int size)
    {
        unordered_map<int,int>u;
        int f=size/2;
        for(int i=0;i<size;i++){
            u[a[i]]++;
        }
        for(int i=0;i<size;i++){
            if(u[a[i]]>f)
             return a[i];
        }
       return -1; 
    }
