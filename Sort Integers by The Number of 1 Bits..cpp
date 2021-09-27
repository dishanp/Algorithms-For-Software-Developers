class Solution {
public:
    static int f(int n){
        int ctr=0;
        int i = 0;
    while (n > 0) {
        if(n % 2==1){
            ++ctr;
        }
        n = n / 2;
    }
        return ctr;
    }
    static bool comp(int a,int b){
        if(f(a)==f(b))
        {
            return a<b;
        }
            return f(a)<f(b);
    }
    vector<int> sortByBits(vector<int>& arr) {
        sort(arr.begin(),arr.end(),comp);
        return arr;
    }
};
