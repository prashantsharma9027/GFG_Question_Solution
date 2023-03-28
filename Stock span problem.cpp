class Solution
{
    public:
    //Function to calculate the span of stockâ€™s price for all n days.
    vector <int> calculateSpan(int price[], int n)
    {
       // Your code here
       stack<pair<int,int>> st;
       vector<int> ngl;
       
       for(int i = 0 ; i<n ; i++)
       {
          while(st.size() > 0 && st.top().first <= price[i])
          {
              st.pop();
          }
           
          if(st.empty()) 
          {
              ngl.push_back(-1);
          }
           
          else
          {
              ngl.push_back(st.top().second);
          }
           
          st.push({price[i] , i});
          
           
       }
       
       

        
       
       
      for(int i = 0 ; i<n ; i++)
      {
          ngl[i] = i - ngl[i];
        
      }
    
        
        
       
       return ngl;
       
    }
};