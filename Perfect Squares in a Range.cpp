class Solution {
  public:
    int numOfPerfectSquares(int a, int b) {
       int n=ceil(sqrt(a));
       int ctr=0;
       for(int i=n;i;i++){
           if(i*i<=b)
           ++ctr;
           else
           break;
       }
       return ctr;
    }
};
