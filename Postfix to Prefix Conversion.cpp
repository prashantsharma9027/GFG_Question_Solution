class Solution {
  public:
    string postToPre(string post_exp) {
        // Write your code here
        stack<string> st; 
        string result;
        
        for (int i = 0; i < post_exp.length(); i++) {
            char c = post_exp[i];

            if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9'))
            {
                st.push(string(1,post_exp[i]));
            }
            else
            {
                string val1 = st.top();
                st.pop();
                string val2 = st.top();
                st.pop();
                
                st.push(post_exp[i] + val2 + val1);
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