class Solution { 
  private:
  
    void dfs(int node , vector<int> adj[] , unordered_map<int , bool> &visited , vector<int> &ans)
    {
        ans.push_back(node);
        visited[node] = 1;
        
        
        for(auto i : adj[node])
        {
            if(!visited[i])
                dfs(i,adj,visited,ans);
        }
    }
  public:
    // Function to return a list containing the DFS traversal of the graph.
    vector<int> dfsOfGraph(int V, vector<int> adj[]) {
        // Code here
        vector<int> ans;
        unordered_map<int , bool> visited;
        
        for(int i = 0 ; i<V ; i++)
        {
            if(!visited[i])
            {
                dfs(i , adj , visited , ans);
            }
        }
        return ans;
    }
};