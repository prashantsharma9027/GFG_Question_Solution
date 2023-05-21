class Solution {
    bool dfs(int node, unordered_map<int , bool> &visited ,vector<int> adj[] ,unordered_map<int , bool> &dfsCall )
    {
        visited[node] = 1;
        dfsCall[node] = true;
        
        for(auto neighbour : adj[node])
        {
            if(!visited[neighbour])
            { 
                dfsCall[neighbour] = true;
                bool ans = dfs(neighbour, visited , adj , dfsCall);
                if(ans == 1) return true;
            }
            else if(dfsCall[neighbour] == true)
            {
                return true;
            }
        }
        
        dfsCall[node] = false;
        
        return false;
    }
    
  public:
    // Function to detect cycle in a directed graph.
    bool isCyclic(int V, vector<int> adj[]) {
        // code here
        unordered_map<int , bool> visited;
        unordered_map<int , bool> dfsCall;
        
        
        
        for(int i = 0 ; i<V ;i++ )
        {
            if(!visited[i])
            {
                bool ans = dfs(i, visited , adj , dfsCall);
                if(ans == 1) return true; 
            }
        }
        
        return false;
    }
};