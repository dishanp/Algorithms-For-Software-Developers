class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        unordered_map<int,int>u;
        int ctr=0;
        for(int i:arr){
            u[i]++;
        }
        for(int i=1;i<INT_MAX;i++){
            if(u[i]==0)
                ++ctr;
            if(ctr==k)
                return i;
        }
        return -1;
    }
};
