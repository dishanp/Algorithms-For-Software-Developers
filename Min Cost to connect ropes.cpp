long long minCost(long long arr[], long long n) {
        priority_queue<long long,vector<long long>,greater<long long>>pq;
        for(long long i=0;i<n;i++){
            pq.push(arr[i]);
        }
        long long ans=0;
         while(pq.size()>1){
           long long length=0;
           long long x=pq.top();
           pq.pop();
           long long y=pq.top();
           pq.pop();
           length=x+y;
           ans+=length;
           pq.push(length);
       }
        return ans;
    }
