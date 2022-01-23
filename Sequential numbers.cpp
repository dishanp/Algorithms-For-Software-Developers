class Solution {
public:
    bool seq(int no){
        int rem;
        int curr;
        int prev=-1;
        while(no){
            rem=no%10;
            if(prev!=-1&&prev!=rem+1)
                return false;
            prev=rem;
            no/=10;
        }
        return true;
    }
    vector<int> sequentialDigits(int low, int high) {
        vector<int>res;
        for(int i=low;i<=high;i++)
            if(seq(i))
                res.push_back(i);
        return res;
    }
};
