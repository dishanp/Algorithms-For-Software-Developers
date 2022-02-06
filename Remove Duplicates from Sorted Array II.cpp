class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n=nums.size();
        if(n==0||n==1||n==2)
            return n;
        map<int,int>u;
        for(int i:nums)
            u[i]++;
        int k=0;
        nums.clear();
        for(auto i:u){
            if(i.second>=2)
            {
                k+=2;
                nums.push_back(i.first);
                nums.push_back(i.first);
            }
            else
            {
                k+=1;
                nums.push_back(i.first);
            }
        }
        return k;
    }
};
