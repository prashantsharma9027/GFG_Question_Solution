//https://practice.geeksforgeeks.org/problems/armstrong-numbers2727/1


class Solution {
  public:
    string armstrongNumber(int n){
        // code here
        int ans = 0;
        int original = n;
        
        
        for(int i = 0 ; i <3 ; i++)
        {
            int digit = n%10;
            ans = ans + pow(digit , 3);
            n = n/10;
        }
        
        if(ans == original)
        {
            return "Yes";
        }
        else
        {
            return "No";
        }
    }
};