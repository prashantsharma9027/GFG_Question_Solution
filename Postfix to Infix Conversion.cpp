class Solution {
  public:

    string postToInfix(string exp) {
        // Write your code here
        stack<string> st; 
        string result;
        
        for (int i = 0; i < exp.length(); i++) {
            char c = exp[i];

            if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9'))
            {
                st.push(string(1,exp[i]));
            }
            else
            {
                string val1 = st.top();
                st.pop();
                string val2 = st.top();
                st.pop();
                
                st.push('(' + val2 + exp[i] + val1 + ')');
            }
        }
        
        while(!st.empty())
        {
            result += st.top();
            st.pop();
        }
        
        return result;
    }
};