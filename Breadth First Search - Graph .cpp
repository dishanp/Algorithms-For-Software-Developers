class Solution {
  public:
    // Function to return Breadth First Traversal of given graph.
    vector<int> bfsOfGraph(int V, vector<int> adj[]) {
        // Code here
        vector<int>res;
        vector<bool>vis(V+1,false);
        int start=0;
        queue<int>q;
        q.push(start);
        while(!q.empty()){
            int x=q.front();
            q.pop();
            res.push_back(x);
            for(auto i:adj[x]){
                if(vis[i]==0){
                    q.push(i);
                    vis[i]=true;
                }
            }
        }
        return res;
    }
};
