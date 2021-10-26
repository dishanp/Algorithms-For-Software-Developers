class Solution {
public:
    void dfs_util(int node,vector<bool>&vis,unordered_map<int,vector<int>>adj){
        vis[node]=true;
        for(auto it:adj[node]){
            if(vis[it]==false)
                dfs_util(it,vis,adj);
        }
    }
    int makeConnected(int n, vector<vector<int>>& connections) {
        int comp=0;//No of Connected components
        vector<bool>vis(n,false);
        // Making Adjacency List:
        unordered_map<int,vector<int>>adj;
        for(int i=0;i<connections.size();i++){
    adj[connections[i][0]].push_back(connections[i][1]);
    adj[connections[i][1]].push_back(connections[i][0]);
        }
        
        for(int i=0;i<n;i++){
            if(!vis[i]){
            dfs_util(i,vis,adj);
            ++comp;
            }
        }
        return comp;
    }
};
