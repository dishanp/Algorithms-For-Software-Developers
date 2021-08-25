class Solution {
public:
    int maxProduct(vector<int>& nums) {        
        int prod=1;
        int max_val=INT_MIN;
        
        for(int i=0;i<nums.size();i++)
        {
            if(prod==0)
                prod=1;
            
            prod=prod*nums[i];
            max_val=max(max_val,prod); 
        }
        prod=1;
        for(int i=nums.size()-1;i>=0;i--)
        {
            if(prod==0)
                prod=1;
            
            prod=prod*nums[i];
            max_val=max(max_val,prod);
        }
        
        return max_val;
        
    }
};
