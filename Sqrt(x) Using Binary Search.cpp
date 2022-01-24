class Solution {
public:
    int mySqrt(int x) {
       int lo=0;
       int hi=x;
        int ans;
       long long mid;
        while(lo<=hi){
            mid=lo+(hi-lo)/2;
            if(mid*mid==x)
            {
                ans=mid;
                break;
            }
            if(mid*mid > x)
                hi=mid-1;
            else{
                ans=mid;
                lo=mid+1;
            }
        }
        return ans;
    }
};
