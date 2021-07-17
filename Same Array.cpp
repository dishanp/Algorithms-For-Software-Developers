class Solution{
    public:

    //Function to check if two arrays are equal or not.
    bool check(vector<ll> A, vector<ll> B, int N) {
        unordered_map<int,int>u;
        for(int i=0;i<N;i++)
        u[A[i]]++;
        for(int i=0;i<N;i++)
        u[B[i]]--;
        for(auto i:u)
        if(i.second>0)
        return false;
        return true;
    }
};
