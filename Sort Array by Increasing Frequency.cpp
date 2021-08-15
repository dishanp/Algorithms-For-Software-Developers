class Solution {
public:
    class compare_fun
    {    
        public:
        bool operator()(pair<int, int> p1, pair<int, int> p2) 
        {    
            if(p1.first==p2.first)
                return p1.second < p2.second;
            return p1.first > p2.first;
        }
    };
    
    vector<int> frequencySort(vector<int>& nums) {
        
        //Creating map of array elements with their count
        unordered_map<int, int> mp;
        for(auto x: nums)
            mp[x]++;
        
        // *Min Heap*
        priority_queue<pair<int,int>, vector<pair<int,int>>, compare_fun> minH;
        vector<int> v;
        
        //Traversing through map and pushing it in heap
        for(auto x: mp){
            minH.push(make_pair(x.second, x.first)); // Making pair of count and the number
        }
        
        //Pushing the heap elements in vector multiplied with it's frequency
        while(minH.size() > 0){
            for(int i=0; i<minH.top().first; i++)
                v.push_back(minH.top().second);
            minH.pop();
        }
        
        return v;
    }
};
