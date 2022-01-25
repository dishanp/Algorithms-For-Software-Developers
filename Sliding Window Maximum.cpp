class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& arr, int k) {
        
        priority_queue<pair<int,int>> p;
        vector<int>res;
        
        for(int i = 0; i < k; i++)
            p.push({arr[i],i});
        
        res.push_back(p.top().first);
        
        for(int i = k; i < arr.size(); i++)
        {
            
            p.push({arr[i],i});
           
            while(p.top().second < i-k+1)
                p.pop();
            
            res.push_back(p.top().first);
        }
        
        return res;
        
    }
};
