class Solution
{
private: 
    long long factorial(long long i)
    {
        if(i==1)
        {
            return 1;
        }
        
        long long ans = i * factorial(i-1);
        return ans;
    }
public:
    vector<long long> factorialNumbers(long long N)
    {
        // Write Your Code here
        
        vector<long long> ans;
        
        for(long long i = 1 ; i <= N ; i++)
        {
            long long temp = factorial(i);
            
            if(temp<=N)
            {
                ans.push_back(temp);
            }
            else{
                break;
            }
        }
        
        return ans;
    }
};