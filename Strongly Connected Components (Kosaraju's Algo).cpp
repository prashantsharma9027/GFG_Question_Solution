class Solution
{
    public:
    void dfs(int i,vector<vector<int>> &adj,vector<int> &visited,stack<int>&st)
    {
        visited[i]=1;
        for(auto it: adj[i])
        {
            if(!visited[it])
            {
                dfs(it,adj,visited,st);
            }
        }
        st.push(i);
    }
    
    void dfsT(int i,vector<int> adjT[],vector<int>&visited)
    {
        visited[i]=1;
        for(auto it: adjT[i])
        {
            if(!visited[it])
            {
                dfsT(it,adjT,visited);
            }
        }
    }
    
    int kosaraju(int V, vector<vector<int>>& adj)
    {
        // 1 - find the topo sort 
        // 2- find the transpose of the graph
        // 3- apply dfs on stack
        
        vector<int> visited(V,0);
        stack<int> st;
        
        for(int i=0;i<V;i++)
        {
            if(!visited[i])
            {
                dfs(i,adj,visited,st);
            }
        }
        
        
        vector<int> adjT[V];
        
        for(int i=0;i<V;i++)
        {
            visited[i]=0;
            for(auto it : adj[i])
            {
                adjT[it].push_back(i);
            }
        }
        
        int ans=0;
        
        while(!st.empty())
        {
            int val=st.top();
            st.pop();
            if(!visited[val])
            {
                ans++;
                dfsT(val,adjT,visited);
            }
            
            
        }
        
        return ans;
	
    }
};