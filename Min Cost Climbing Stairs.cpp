class Solution {
    private:
    int solve(vector<int>&cost , int n , vector<int>&dp)
    {
        if(n==0) return cost[0];
        if(n==1) return cost[1];
    
        if(dp[n] != -1) return dp[n];
        
        dp[n] = cost[n] + min(solve(cost , n-1,dp) , solve(cost,n-2,dp));
        
        return dp[n];
        
    }
  public:
    int minCostClimbingStairs(vector<int>&cost ,int N) {
        //Write your code here
        vector<int>dp(N+1 ,-1);
        
        int ans = min(solve(cost , N-1 , dp) , solve(cost , N-2 ,dp));
        
        return ans;
    }
}