class Solution
{
    public:
    pair<long,long> indexes(vector<long long> v, long long x)
    {
        // code here
        
        pair<long,long>ans;
        int count = 0;
        
        bool visited = true;
        
        int i = 0;
        
        for(i; i<v.size();i++)
        {
            if(v[i] == x)
            {
                if(visited == true)
                {
                    ans.first = i;
                    visited = false;
                }
                count++;
                if(v[i+1] != x) break;
            }
            
            
        }
        
        if(count == 1)
        {
            ans.second = ans.first;
        }
        else
        {
            ans.second = i;
        }
        
        
        
        
        if(visited == true) return {-1,-1};
    
        return ans;
        
        
    }
};