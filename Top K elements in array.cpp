class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>u;
        for(int i=0;i<nums.size();i++)
            u[nums[i]]++;
priority_queue<int, vector<int>, greater<int>> minh;
        for(auto i:u){
            minh.push(i.second);
                if(minh.size()>k)
                    minh.pop();
        }
        vector<int> res;
        for(auto i : u) {
            if(i.second >= minh.top())                                  
              res.push_back(i.first);
        }
        return res;
}
};
