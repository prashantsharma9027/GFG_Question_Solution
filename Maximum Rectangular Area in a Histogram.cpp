class Solution
{
    private:
    vector<int> nextSmallerElement(long long arr[], int n) {
        stack<int> s;
        s.push(-1);
        vector<int> ans(n);

        for(int i=n-1; i>=0 ; i--) {
            int curr = arr[i];
            while(s.top() != -1 && arr[s.top()] >= curr)
            {
                s.pop();
            }
            
            ans[i] = s.top();
            s.push(i);
        }
        return ans;
    }
    
    vector<int> prevSmallerElement(long long arr[], int n) {
        stack<int> s;
        s.push(-1);
        vector<int> ans(n);

        for(int i=0; i<n; i++) {
            int curr = arr[i];
            while(s.top() != -1 && arr[s.top()] >= curr)
            {
                s.pop();
            }
       
            ans[i] = s.top();
            s.push(i);
        }
        return ans; 
    }
    
    
    public:
    //Function to find largest rectangular area possible in a given histogram.
    long long getMaxArea(long long arr[], int n)
    {
        // Your code here
        vector<int> prev;
        prev = prevSmallerElement(arr , n);
        
        vector<int> next;
        next = nextSmallerElement(arr , n);
        
        long long area = INT_MIN;
        
        for(int i = 0 ; i< n ; i++)
        {
            long long l = arr[i];
            
            if(next[i] == -1){
                next[i] = n;
            }
            
            long long b = next[i] - prev[i] - 1 ;
            
            long long newarea = l*b;
            
            area = max(area , newarea);
        }
        
        return area;
    }
};