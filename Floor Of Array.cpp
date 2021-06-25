int findFloor(vector<long long> v, long long n, long long x){
        int in=-1;
        int min=INT_MAX;
        for(int i=0;i<n;i++){
            if(x>=v[i]&&abs(x-v[i])<min){
               in=i;
               min=x-v[i];
            }
        }
        return in;
    }
