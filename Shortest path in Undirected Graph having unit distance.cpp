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
        
        int dis[N];
        for(int i=0;i<N;i++)
        {
            dis[i] = INT_MAX;
        }
        
        dis[src]= 0;
        

        queue<int> q;
        q.push(src);
       
        
        while(!q.empty())
        {
            int front = q.front();
            q.pop();
            
            
            for(auto i : adj[front])
            {
                if(dis[front]+1<dis[i])
                {
                    dis[i]= dis[front]+1;
                    q.push(i);
                }
            }
        }
        
        vector<int> ans(N,-1);
        
        for(int i=0;i<N;i++)
        {
          
           if(dis[i]!= INT_MAX)
           {
              ans[i]=dis[i];
           } 
        }
        return ans;
        
    }
};