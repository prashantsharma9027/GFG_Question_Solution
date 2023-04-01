class Solution{
    public:
    int longest(int arr[],int n)
    {
        // Write your code here
        int count = 0;
        
        int maxi = arr[0];
        
        for(int i = 0 ; i<n;i++)
        {
            if(arr[i] >= maxi)
            {
                count++;
            }
            
            maxi = max(maxi,arr[i]); 
        }
        
        return count;
    }
};