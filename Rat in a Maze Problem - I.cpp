class Solution{
    private:
    bool isSafe(int newx , int newy , int n , vector<vector<int>> &m , vector<vector<bool>> &visited)
    {
      
        if (newx >= 0 && newx < n && newy >= 0 && newy < n && m[newx][newy] != 0 && !visited[newx][newy]) {
            return true;
        }
        return false;
    
    }
    
   void solve(int x, int y, vector<vector<int>>& m, int n, string path, vector<string>& ans, vector<vector<bool>>& visited) 
    {
        if(x == n-1 && y == n-1)
        {
            ans.push_back(path);
            return;
        }
        
        visited[x][y] = true;
        if (isSafe(x + 1, y, n, m, visited)) 
        {
            solve(x + 1, y, m, n, path + 'D', ans, visited);
        }

        if (isSafe(x, y - 1, n, m, visited)) 
        {
            solve(x, y - 1, m, n, path + 'L', ans, visited);
        }

        if (isSafe(x, y + 1, n, m, visited)) 
        {
            solve(x, y + 1, m, n, path + 'R', ans, visited);
        }

        if (isSafe(x - 1, y, n, m, visited)) 
        {
            solve(x - 1, y, m, n, path + 'U', ans, visited);
        }
        visited[x][y] = 0;
    }
    
    public:
    vector<string> findPath(vector<vector<int>> &m, int n) {
        // Your code goes here
        vector<string> ans;
        string path = "";
        vector<vector<bool>> visited (n,vector<bool>(n,0));
        
        if(m[0][0] == 0) return ans;
        
        solve(0, 0, m, n, path, ans, visited);
        
        return ans;
    }
};