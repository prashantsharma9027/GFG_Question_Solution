class Solution{
    public:
    // Function to check if given number n is a power of two.
    bool isPowerofTwo(long long n){
        
        // Your code here    
         int count=0;

       while(n){

           if(n&1) count++;

           n=n>>1;

       }

       return count==1;
        
    }
};