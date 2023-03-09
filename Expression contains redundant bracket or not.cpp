class Solution {
  public:
    int checkRedundancy(string s) {
        // code here
        stack<char> st;
        
        for(int i = 0; i< s.length() ; i++)
        {
            char ch = s[i];
            
            if(ch == '(' || ch == '+' || ch == '-' || ch == '*' || ch == '/')
            {
                st.push(ch);
            }
            
            else
            {
                if(ch == ')')
                {
                    bool redundant = true;
                    
                    while(st.top() != '(' )
                    {
                        char temp = st.top();
                        if(temp == '+' || temp == '-' || temp == '*' || temp == '/')
                        {
                            redundant = false;
                        }
                        st.pop();
                    }
                    
                    if(redundant == true)
                    {
                        return true;
                    }
                    st.pop();
                }
            }
            
        }
        
        return false;
    }
};