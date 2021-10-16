class Solution {
public:
    void util(vector<bool>&vis,vector<vector<int>>& adj,int start){
        vis[start]=true;
        for(auto i:adj[start]){
            if(!vis[i])
                util(vis,adj,i);
        }
    }
    bool validPath(int n, vector<vector<int>>& edges, int start, int end) {
        vector<bool>vis(n+1,false);
        vector<vector<int>> adj(n);
        for (auto &edge: edges) {
            adj[edge[0]].push_back(edge[1]);
            adj[edge[1]].push_back(edge[0]);
        }
        util(vis,adj,start);
        return vis[end];
    }
};
