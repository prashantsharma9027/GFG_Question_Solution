class Solution {
  private:
    void solve(int index , int target ,vector<int> &A, vector<vector<int>> &ans , vector<int>&ds)
    {
        if(index == A.size())
        {
            if(target == 0)
            {
                ans.push_back(ds);
            }
            return;
        }
        
        if(A[index]<=target)
        {
            ds.push_back(A[index]);
            solve(index,target-A[index],A,ans,ds);
            ds.pop_back();
        }
        
        solve(index+1 , target , A , ans , ds);
    }
  public:
    //Function to return a list of indexes denoting the required 
    //combinations whose sum is equal to given number.
    vector<vector<int> > combinationSum(vector<int> &A, int B) {
        // Your code here
        vector<vector<int>> ans;
        vector<int>ds;
  
        
        set<int>s(A.begin(), A.end());

        while(A.size()!=0) A.pop_back();

        for(auto it: s){

             A.push_back(it);

         }
        
        solve(0 , B , A , ans ,ds );
        
        

        return ans;
    }
};