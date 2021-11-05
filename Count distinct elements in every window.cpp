class Solution{
  public:
    vector <int> countDistinct (int nums[], int n, int k)
    {
        vector<int>res;
        unordered_map<int,int>u;
        int left=0;
        int d=0;
        for(int i=0;i<n;i++){
            u[nums[i]]++;
            if(i-left+1==k){
                res.push_back(u.size());
            }
            while(i-left+1>=k){
                u[nums[left]]--;
                if(u[nums[left]]==0){
                    u.erase(nums[left]);
                }
                ++left;
            }
        }
        return res;
    }
};
