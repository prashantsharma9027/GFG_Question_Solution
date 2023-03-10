class Solution 
{
    public:
    //Function to find if there is a celebrity in the party or not.
    int celebrity(vector<vector<int> >& M, int n) 
    {
        // code here 
        stack<int> st;
        
        for(int i =0 ; i< n ; i++)
        {
            st.push(i);
        }
        
        while(st.size() > 1)
        {
            int a = st.top();
            st.pop();
            
            int b = st.top();
            st.pop();
            
            if(M[a][b] == 1)
            {
                st.push(b);
            }
            else{
                st.push(a);
            }
        }
        
        int ans = st.top();
        
        int zerocount = 0;
        
        for(int i = 0 ; i< n ; i++)
        {
            if(M[ans][i] == 0)
            {
                zerocount++;
            }
        }
        
        if(zerocount != n) return -1;
        
        int onecount = 0;
        
        for(int i = 0 ; i< n ; i++)
        {
            if(M[i][ans] == 1)
            {
                onecount++;
            }
        }
        
        if(onecount != n-1) return -1;
        
        return ans;
    }
    
};