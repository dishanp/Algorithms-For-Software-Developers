class Solution {
public:
    int minimumCost(vector<int>& cost) {
        int costr=0;
        int ctr=0;
        sort(cost.begin(),cost.end(), greater<int>());
        for(int i=0;i<cost.size();i++){
            if(ctr==2)
            {
                ctr=0;
                continue;
            }
            else{
                ++ctr;
                costr+=cost[i];
            }
        }
        return costr;
    }
};
