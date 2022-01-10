class Solution {
public:
    int numTrees(int n) {
        double i=0.0;
        double j=0.0;
        double p=1.0;
        for(i=2*n,j=n;i>n+1,j>1;i--,j--){
            p*=(i/j);
        }
        return round(p);
    }
};      
