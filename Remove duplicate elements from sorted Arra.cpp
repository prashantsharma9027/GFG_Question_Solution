class Solution{
public:
    int remove_duplicate(int a[],int n){
        // code here
        
        int k = 0;
        for(int i = 0 ; i<n ; i++)
        {
            if(a[k]!=a[i])
            {
                a[k+1]=a[i];
                k++;
            }
        }
        
        return k+1;
        
        
    }
};