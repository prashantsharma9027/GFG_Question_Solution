class Solution{
public:

    vector<int> count_NGE(int n, vector<int> &arr, int queries, vector<int> &indices){
        //write your code here
        
        vector<int>ans;
        stack<int> st;
        
        
        for(int j = 0 ; j<queries ; j++)
        {
            int count = 0;
            
            for(int i = arr.size()-1 ; i>=indices[j];i--)
            {
                if(arr[i] > arr[indices[j]])
                {
                    st.push(arr[i]);
                }
                
            }
            
            while(!st.empty())
            {
                count++;
                st.pop();
            }
            
            ans.push_back(count);
        }
        
        return ans;
    
    }

};