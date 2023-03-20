class Solution {
	public:
		string FirstNonRepeating(string A){
		    // Code here
		    unordered_map<char,int> mp;
		    queue<char> q;
		    string ans = "";
		    
		    for(int i = 0 ; i<A.length(); i++)
		    {
		        int ch = A[i];
		        
		        mp[ch]++;
		        
		        q.push(ch);
		        
		        
		        while(!q.empty())
		        {
		            if(mp[q.front()]>1)
		            {
		                q.pop();
		            }
		            else
		            {
		                ans.push_back(q.front());
		                break;
		            }
		        }
		        if(q.empty()) ans.push_back('#');
		    }
            return ans;
		}

};