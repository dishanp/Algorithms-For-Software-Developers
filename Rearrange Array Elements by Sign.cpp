class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>p;
        vector<int>n;
        int s=nums.size();
        for(int i:nums)
        {
            if(i>0)
                p.push_back(i);
            else
                n.push_back(i);
        }
        int j,k;
        j=k=0;
        for(int i=0;i<s;i++){
            if(i%2==0)
                nums[i]=p[j++];
            else
                nums[i]=n[k++];
        }
        return nums;
    }
};
