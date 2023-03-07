class Solution
{
    public:
    //Function to check if brackets are balanced or not.
    bool ispar(string x)
    {
        // Your code here
        stack<char> s;
        
        for(int i = 0 ; i< x.size() ; i++)
        {
            char ch = x[i];
            
            if(ch == '[' || ch == '{' || ch == '(')
            {
                s.push(ch);
            }
            
            else
            {
                if((ch == '}' && s.top() == '{')  || (ch == ')' && s.top() == '(') || (ch == ']' && s.top() == '[')){
                    s.pop();
                }
                else{
                    return false;
                }
            }
        }
        
        if(s.empty())
        {
            return true;
        }
        else{
            return false;
        }
    }

};