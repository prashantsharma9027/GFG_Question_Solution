class Solution {
  public:
    vector<int> shortestPath(vector<vector<int>>& edges, int N,int M, int src){
        
        // code here
        unordered_map<int , list<int>> adj;
        
        for(int i = 0 ; i< edges.size() ; i++)
        {
            int u = edges[i][0];
            int v = edges[i][1];
            
            adj[u].push_back(v);
            adj[v].push_back(u);
            
        }
        
        unordered_map<int , bool> visited;
        unordered_map<int , int> parent;
        queue<int> q;
        q.push(1);
        parent[1] = -1;
        
        while(!q.empty())
        {
            int front = q.front();
            q.pop();
            
            
            for(auto i : adj[front])
            {
                if(!visited[i])
                {
                    q.push(i);
                    parent[i] = front;
                    visited[i] = true;
                }
            }
        }
        
        vector<int> ans;
        int CurrNode = n-1;
        ans.push_back(Curr);
        
        while(CurrNode != src)
        {
            CurrNode = parent[CurrNode];
            ans.push_back(CurrNode);
        }
        
        reverse(ans.begin(),ans.end());
        
        return ans;
        
    }
};