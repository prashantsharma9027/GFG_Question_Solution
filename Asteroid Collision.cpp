class Solution {
  public:
    vector<int> asteroidCollision(int N, vector<int> &asteroids) {
        // code here
        stack<int> st;
        vector<int> ans;

        for(int i=0; i<asteroids.size(); i++)
        {
            if(asteroids[i]>0)
            {
                st.push(asteroids[i]);
            }
            else
            {
                if(st.empty())
                {
                    st.push(asteroids[i]);
                    continue;
                }

                while(!st.empty() && st.top()>0 && st.top()<abs(asteroids[i]))
                {
                    st.pop();
                }
                if(st.size()==0)
                {
                        st.push(asteroids[i]);
                        continue;
                }
                    
                if(st.top()<0)
                {
                   st.push(asteroids[i]); 
                        continue;
                }
                if(st.top()+asteroids[i]==0)
                {
                   st.pop();
                   continue;
                }
            }
        }
        while(st.size()!=0)
        {
            ans.push_back(st.top());
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};