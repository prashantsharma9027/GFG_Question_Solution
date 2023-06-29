class Solution {
    private:
    int mod=1e9+7;
    //recursion :- TC:-O(2^n) SC:O(n)  TLE
    long long int solve(long long int n){
        if(n<=1)return n;
        return (solve(n-1)+solve(n-2))%mod;
    }
    //top-down approach: TC:-O(n) SC:- O(n)+O(n)
    long long int solve(long long int n,vector<long long int>&dp){
        if(n<=1)return n;
        if(dp[n]!=-1)return dp[n];
        return dp[n]=(solve(n-1,dp)+solve(n-2,dp))%mod;
    }
    
  public:
    long long int nthFibonacci(long long int n){
   
        //bottom- up approach: TC:-O(n) SC:- O(n)
        vector<long long int>dp(n+1,-1);
        dp[0]=0;
        dp[1]=1;
        for(long long i=2;i<=n;i++)dp[i]=(dp[i-1]+dp[i-2])%mod;
        return dp[n];
        
        
        // space optimization: TC:-O(n) SC:- O(1)
        long long int prev2=0;
        long long int prev1=1;
        for(long long int i=2;i<=n;i++){
            long long  curr=(prev2+prev1)%mod;
            prev2=prev1;
            prev1=curr;
        }
        return prev1;
    }
};