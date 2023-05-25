class Solution {
  private:
    void topoSort(int visited[],vector<pair<int,int>> adj[],stack<int>&st,int node)
    {
        visited[node]=1;
        
        for(auto it:adj[node])
        {
            int v = it.first;
            if(visited[v]==0)
            {
                topoSort(visited,adj,st,v);
            }
        }
        st.push(node);
    }
    
  public:
     vector<int> shortestPath(int N,int M, vector<vector<int>>& edges){
         
        vector<pair<int,int>> adj[N];
        for(int i=0;i<M;i++)
        {
            int u = edges[i][0];
            int v = edges[i][1];
            int w = edges[i][2];
            adj[u].push_back({v,w});
        }
        
        int visited[N]={0};
        
        stack<int> st;
        
        for(int i=0;i<N;i++)
        {
            if(!visited[i])
            {
                topoSort(visited,adj,st,i);
            }
        }
        
        vector<int> dis(N,1e9);
        
        dis[0] = 0;
        while(!st.empty())
        {
            int node = st.top();
            st.pop();
            
            for(auto it:adj[node])
            {
                int v = it.first;
                int wt = it.second;
                
                if(dis[node] + wt < dis[v])
                {
                    dis[v] = dis[node]+wt;
                }
            }
        }
        
        for(int i=0;i<dis.size();i++)
        {
            if(dis[i]==1e9)
            {
                dis[i]=-1;
            }
        
        }
            
        return dis;
    }
};