class Solution {
  private:
    void bfs(vector<int> adj[] , unordered_map<int,bool> &visited ,vector<int>&ans , int node)
    {
        queue<int> q;
        q.push(node);
        visited[node] = 1;
        
        while(!q.empty())
        {
            int frontNode = q.front();
            q.pop();
            ans.push_back(frontNode);
            
            
            for(auto i : adj[frontNode])
            {
                if(!visited[i])
                {           
                    q.push(i);
                    visited[i] = 1;
                }
            }
        }
    }
  public:
    // Function to return Breadth First Traversal of given graph.
    vector<int> bfsOfGraph(int V, vector<int> adj[]) {
        // Code here
        
        vector<int>ans;
        unordered_map<int,bool> visited;
        
        bfs(adj , visited , ans , 0);
        
        return ans;
    }
};