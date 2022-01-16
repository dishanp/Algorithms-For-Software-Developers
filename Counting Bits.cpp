class Solution {
public:
    int util(int n){
        int ctr=0;
        while(n){
            n=n&(n-1);
            ++ctr;
        }
        return ctr;
    }
    vector<int> countBits(int n) {
        vector<int>res;
        for(int i=0;i<=n;i++){
            res.push_back(util(i));
        }
        return res;
    }
};
