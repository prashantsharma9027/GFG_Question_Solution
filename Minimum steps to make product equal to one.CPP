class Solution {
  public:
    int makeProductOne(int arr[], int N) {
        // code here
        int count = 0;
        int ans = 0;
        
        
        for(int i = 0; i<N ; i++)
        {
            if(arr[i]<0)
            count++;
        }
        
        for(int i = 0 ; i<N ; i++)
        {
            if(arr[i]<0)
            {
                ans += abs(arr[i]) - 1;
            }
            else if(arr[i] == 0 && count%2 != 0)
            {
                ans += 1;
                count--;
            }
            else
            {
                ans += abs(arr[i] - 1);
            }
        }
        
        if(count%2 != 0)
        {
            ans += 2;
        }
        
        return ans;
    }
};