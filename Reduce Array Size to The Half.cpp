class Solution {
    public:
        int minSetSize(vector<int>& arr) 
        {
            unordered_map<int,int> mp;
            for(int n : arr) ++mp[n];
            vector<int> v;
            for(auto& p : mp) v.push_back(p.second);
            sort(v.begin(), v.end(), greater<int>());

            int set_size = 0;
            int half = arr.size()/2;
            for(int n : v)
            {
                ++set_size;
                half -= n;
                if(half <= 0) break;
            }
            return set_size;
        }
};
