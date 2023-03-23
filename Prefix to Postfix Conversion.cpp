class Solution {
  public:
    string preToPost(string pre_exp) {
        stack<string> st; 
        string result;
        
        for (int i = pre_exp.length()-1; i >= 0; i--) {
            char c = pre_exp[i];

            if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9'))
            {
                
                st.push(string(1,pre_exp[i]));
                // string temp="";
                // temp+=s[i];
                // st.push(temp);
            }
            else
            {
                string val1 = st.top();
                st.pop();
                string val2 = st.top();
                st.pop();
                
                st.push(val1 + val2  + pre_exp[i] );
            }
        }
        
        while(!st.empty())
        {
            result += st.top();
            st.pop();
        }
        
        return result;
    }