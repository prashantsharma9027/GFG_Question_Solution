class Solution
{
	public:
    void dfs(int src,int V,vector<int>adj[],unordered_map<int,bool>&visited,int c,int d)
    {
	        visited[src]=1;
	        
	        for(int neighbour:adj[src])
	        {
	            //ingnore c-d edge
	            if((src==c && neighbour==d) || (src==d && neighbour==c))
	            {
	                continue;
	            }
	            if(!visited[neighbour])
	            {
	                dfs(neighbour,V,adj,visited,c,d);
	            }
	        }
	    }
	
	
    //Function to find if the given edge is a bridge in graph.
    int isBridge(int V, vector<int> adj[], int c, int d) 
    {
        unordered_map<int,bool>visited;
        
        dfs(c,V,adj,visited,c,d);
        
        return !visited[d];
    }
};