class Solution {
public:
    int s(vector<int>a){
        int sum=0;
        for(int i:a)
            sum+=i;
        return sum;
    }
    int maximumWealth(vector<vector<int>>& accounts) {
        int maxi=INT_MIN;
        for( auto i:accounts){
            maxi=max(s(i),maxi);
        }
        return maxi;
    }
};
