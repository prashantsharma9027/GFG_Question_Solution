class Solution {
  public:
    vector<int> nextGreaterElement(int N, vector<int>& arr) {
        // code here
        
        stack<int> st;
        vector<int> ans(N);
        
        for(int i = 2*N-1 ; i >= 0 ; i--)
        {
            while(!st.empty() && st.top() <= arr[i%N])
            {
                st.pop();
            }
            
            if(i<N)
            {
                if(!st.empty())
                {
                    ans[i] = st.top();                   
                }
                else
                {
                    ans[i] = -1;   
                }
            }
            st.push(arr[i%N]);
        }
        
        return ans;
    }
};