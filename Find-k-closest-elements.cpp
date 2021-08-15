class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        vector<int>res;
        if(arr.size()<k)
            return res;
        if(arr.size()==k)
            return arr;
        priority_queue<pair<int,int>> pq;
        for(int i=0;i<arr.size();i++){
        pq.push({abs(x-arr[i]), arr[i]});
            if(pq.size()>k)
                pq.pop();
        }
        while(pq.size()>0){
            res.push_back(pq.top().second);
            pq.pop();
        }
        sort(res.begin(),res.end());
        return res;
    }
};
