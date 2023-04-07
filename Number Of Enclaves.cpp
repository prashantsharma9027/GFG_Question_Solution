class Solution {
  public:
    int numberOfEnclaves(vector<vector<int>> &grid) {
        // Code here
        int n = grid.size();
        int m = grid[0].size();

        int visited[n][m] = {0};
        queue<pair<int,int>> q;
        vector<int> delrow = {-1,0,1,0};
        vector<int> delcol = {0,-1,0,1};
        int count = 0;

        for(int i = 0 ; i  < n ; i++)
        {
            for(int j = 0 ; j<m ; j++)
            {
                if( i == 0 || j == 0 || i == n - 1 || j == m - 1 )
                {
                    if(grid[i][j])
                    {
                        visited[i][j] = 1;
                        q.push({i,j}); 
                    }
                }
            }
        }

        while (!q.empty())
        {
            int r = q.front().first;
            int c = q.front().second;
            q.pop();

            for(int i = 0 ; i<4 ; i++)
            {
                int nrow = r + delrow[i];
                int ncol = c + delcol[i];

                if(nrow>=0 && ncol>=0 && nrow<n && ncol<m && visited[nrow][ncol]==0 && grid[nrow][ncol]==1)
                {
                    visited[nrow][ncol] = 1;
                    q.push({nrow , ncol});
                }
            }
        }

        for(int i = 0 ; i<n ; i++)
        {
            for(int j = 0 ; j<m ; j++)
            {
                if(visited[i][j]==0 && grid[i][j]==1)
                {
                    count++;
                }
            }
        }

        return count;
        
    }
};