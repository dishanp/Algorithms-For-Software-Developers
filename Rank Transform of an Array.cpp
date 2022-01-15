class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        map<int,int>u;
        vector<int>res;
        int ctr=1;
        vector<int>arr1=arr;
        sort(arr1.begin(),arr1.end());
        for(int i:arr1){
            if(!u[i])
            u[i]=ctr++;
        }
        for(int i:arr){
            res.push_back(u[i]);
        }
        return res;
    }
};
