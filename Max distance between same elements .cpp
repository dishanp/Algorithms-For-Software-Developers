int maxDistance(int arr[], int n)
    {
    unordered_map<int,vector<int>>u;
    for(int i=0;i<n;i++){
        u[arr[i]].push_back(i);
    }
    int res=INT_MIN;
    for(auto i:u){
       int s=i.second.size();
       int f=i.second[0] ;
       int l=i.second[s-1];
       res=max(res,l-f);
    }
    return res;
  }
