class Solution
{
    public:
    //Function to return Breadth First Traversal of given graph.
	vector<int>bfsOfGraph(int V, vector<int> g[])
	{
	    vector<int> visited(V, 0);
        queue<int> q;
        vector<int> result;

        q.push(0);
        while(!q.empty())
        {
            int u = q.front();
            q.pop();
            result.push_back(u);
        for(auto i : g[u])
        {
        if(visited[i] == false)
        {
            q.push(i);
            visited[i] = true;
        }
    }
}
return result;
	}
};
