void solve(vector<int>adj[],int i,vector<bool>&visit,stack<int>&s){
    visit[i]=true;
    for(auto x:adj[i]){
        if(!visit[x])solve(adj,x,visit,s);
    }
    s.push(i);
}

vector<int> topoSort(int V, vector<int> adj[]){
    vector<bool>visit(V,false);
    stack<int>s;
    vector<int>ans;
    for(int i=0;i<V;i++){
        if(!visit[i])solve(adj,i,visit,s);
    }
    while(!s.empty()){
        ans.push_back(s.top());s.pop();
    }
    return ans;
}

// USING VECTOR INSTEAD OF STACK:

/*

void dfs(vector<int>adj[],vector<int>&res,vector<bool>&vis,int node){
	    vis[node]=true;
	    for(auto it:adj[node])
	        if(!vis[it])
	            dfs(adj,res,vis,it);
	    res.push_back(node);
	}
	vector<int> topoSort(int v, vector<int> adj[]) 
	{
	    vector<bool>vis(v,false);
	    vector<int>res;
	    for(int i=0;i<v;i++)
	    if(!vis[i])
	    dfs(adj,res,vis,i);
	    reverse(res.begin(),res.end());
	    return res;
	}
    
*/
