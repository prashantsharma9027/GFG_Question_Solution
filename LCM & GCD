//https://practice.geeksforgeeks.org/problems/lcm-and-gcd4516/1


long long gcd(long long a,long long b)
     {
         if(b==0)
         {
             return a;
         }
         return gcd(b,a%b);
     }
  public:
    vector<long long> lcmAndGcd(long long A , long long B) 
    {
        // code here
        vector<long long>v;
        v.push_back((A*B)/gcd(A,B));
        v.push_back(gcd(A,B));
        return v;
    };