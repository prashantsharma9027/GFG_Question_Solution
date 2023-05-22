class Solution
{
    // private:
    // void ts(vector<int> adj[] ,unordered_map<int,bool> &visited , stack<int> &st , int node)
    // {
    //     visited[node] = true;
        
        
    //     for(auto neighbour : adj[node])
    //     {
    //         if(!visited[neighbour])
    //         {
    //             ts(adj , visited , st , neighbour);
    //         }
    //     }
        
    //     st.push(node);
    // }
    
	public:
	//Function to return list containing vertices in Topological order. 
	vector<int> topoSort(int V, vector<int> adj[]) 
	{
	    // code here
	    
	   // unordered_map<int,bool> visited;
	    vector<int> ans;
	   // stack<int> st;
	    
	    
	   // for(int i = 0 ; i<V ; i++)
	   // {
	   //     if(!visited[i])
	   //         ts(adj , visited , st , i);
	   // }
	    
	   // while(st.size()>0)
	   // {
	   //     ans.push_back(st.top());
	   //     st.pop();
	   // }
	    
	    
	   // return ans;
	   
	   
	   //           BFS
	   
	   vector<int>indegree(V,0);
	   queue<int> q;
	   
	   for(int i=0;i<V;i++)
       {
           for(auto it : adj[i])
           {
               indegree[it]++;
           }
       }
       
	   
	   for(int i = 0 ; i<V ; i++)
	   {
	       if(indegree[i] == 0)
	            q.push(i);
	   }
	   
	   
	   
	   while(!q.empty())
	   {
	       int front = q.front();
	       q.pop();
	       ans.push_back(front);
	       
	       for(auto neighbour : adj[front])
	       {
	           indegree[neighbour]--;
	           if(indegree[neighbour] == 0)
	                q.push(neighbour);
	       }
	   }
	   
	   return ans;
	   
	   
	}
};