class Solution
{
    private:
    void solve(stack<int>&s, int count ,int sizeOfStack)
    {
        if(count == sizeOfStack/2)
        {
            s.pop();
            return ;
        }
        
        int num = s.top();
        s.pop();
        
        solve(s, count+1 , sizeOfStack);
        s.push(num);
    }
    public:
    //Function to delete middle element of a stack.
    void deleteMid(stack<int>&s, int sizeOfStack)
    {
        // code here.. 
        int count = 0;
        solve(s , count , sizeOfStack);
    }
};