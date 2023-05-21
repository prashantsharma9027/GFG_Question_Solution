class Solution {
  public:
    bool cycleBFS(int src , unordered_map<int , bool> &visited ,vector<int> adj[] )
    {
        unordered_map<int , int> parent;
        queue<int>q;
        q.push(src);
        visited[src] = 1;
        parent[src] = -1;
        
        while(!q.empty())
        {
            int front = q.front();
            q.pop();
            
            for(auto a : adj[front])
            {
                if(visited[a] == 1 && a != parent[front])
                {
                    return true;
                }
                else if(!visited[a])
                {
                    q.push(a);
                    visited[a] = 1;
                    parent[a] = front;
                }
            }
        }
        
        return false;
    }
    
    
    
    // Function to detect cycle in an undirected graph.
    bool isCycle(int V, vector<int> adj[]) {
        // Code here
        unordered_map<int , bool> visited;
        
        
        for(int i = 0 ; i<V ; i++)
        {
            if(!visited[i])
            {
                bool ans = cycleBFS(i,visited,adj);
                
                if(ans == 1) return 1;
            }
        }
        
        return 0;
    }
};