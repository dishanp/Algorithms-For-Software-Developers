class Solution
{
	public:
	void dfs(vector<int>adj[] , stack<int>&s , int vis[] , int v , int i){
	    vis[i]=1;
	    
	    for(auto j:adj[i]){
	        if(vis[j]==0)
	        dfs(adj , s , vis , v, j);
	    }
	    
	    s.push(i);
	}
	
	void calldfs(int vi[] , int x , int v , vector<int>adj[] ){
	    vi[x]=1;
	    
	    for(auto i:adj[x]){
	        if(vi[i]==0)
	        calldfs(vi , i , v, adj);
	    }
	}
	//Function to find number of strongly connected components in the graph.
    int kosaraju(int V, vector<int> adj[])
    {
        //count number of cycle ans single element
        stack<int>s;
        int vis[V]={};
        
        for(int i=0;i<V;i++){
            if(vis[i]==0)
            dfs(adj,s,vis,V,i);
        }
        
        // transpose the adj matrix;
        vector<int>trans[V];

        for(int i=0;i<V;i++){
                for(auto j:adj[i]){ 
                trans[j].push_back(i);}
            
        }
        
        int vi[V]={};
        int cnt=0;
        
        while(s.size()>0){
            int x = s.top();
            s.pop();
            
            if(vi[x]==0){ 
                cnt++;
            calldfs(vi , x ,V , trans);}
        }
        
        return cnt;
    }
};
