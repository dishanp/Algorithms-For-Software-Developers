	//Function to find the shortest distance of all the vertices
    //from the source vertex S.
    vector <int> dijkstra(int v, vector<vector<int>> adj[], int s)
    {
        vector<bool>vis(v+1,false);
        vector<int>dis(v,INT_MAX);
        dis[s]=0;
        vis[s]=true;
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
        pq.push({0,s});
        while(!pq.empty()){
            int u=pq.top().second;
            vis[u]=true;
            pq.pop();
            for(auto it:adj[u]){
                int v=it[0];
                int w=it[1];
                if(!vis[v]&&w+dis[u]<dis[v]){
                    dis[v]=w+dis[u];
                    pq.push({dis[v],v});
                }
            }
        }
        return dis;
    }
