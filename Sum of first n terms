class Solution {
  public:
    long long sumOfSeries(long long N) {
        // code here
        long sum = 0;
        if(N<0)
        {
            return 0;
        }
        
        sum = (N*N*N) + sumOfSeries(N-1);
        return sum;
    }
};