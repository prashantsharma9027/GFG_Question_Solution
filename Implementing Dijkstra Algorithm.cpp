class Solution
{
	public:
	//Function to find the shortest distance of all the vertices
    //from the source vertex S.
    vector <int> dijkstra(int V, vector<vector<int>> adj[], int S)
    {
        // Code here
        
        set<pair<int,int>> st;
        vector<int>dis(V);
        
        for(int i = 0 ; i<V ; i++)
        {
            dis[i] = INT_MAX;
        }
        
        dis[S] = 0;
        st.insert(make_pair(0,S));
        
        while(!st.empty())
        {
            auto top = *(st.begin());
            st.erase(st.begin());
            
            int distance = top.first;
            int node = top.second;
    
            for(auto it : adj[node])
            {
                int w = it[1];
                int n = it[0]; 
                if(distance+w < dis[n])
                {
                    auto record = st.find(make_pair(dis[n] , n));
                    if(record != st.end())
                    {
                        st.erase(record);
                    }
                    
                    dis[n] = dis[node]+w;
                    st.insert({dis[n],n});
                }
            }
        }
        
        return dis;
        
        
    }
};