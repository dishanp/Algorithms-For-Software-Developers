class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        const int n=nums.size();
        vector<int>a;
        a.push_back(0);
        int s=0;
        for(int i=0;i<nums.size();i++){
            s+=nums[i];
            a.push_back(s);
        } 
        for(int i=0;i<nums.size();i++){
            nums[i]=s-nums[i]-a[i];
        }
        for(int i=0;i<nums.size();i++){
            if(nums[i]==a[i])
                return i;
        }
        return -1;
    }
};

//or

class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int s1,s2;
        for(int i=0;i<nums.size();i++){
            s1=0;
            s2=0;
            for(int j=0;j<i;j++)
                s1+=nums[j];
            for(int k=i+1;k<nums.size();k++)
                s2+=nums[k];
            if(s1==s2)
                return i;
        }
        return -1;
        
    }
};
