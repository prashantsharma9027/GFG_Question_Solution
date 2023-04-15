class Solution{
private:
    void solve(vector<int>&arr , int n , int target , vector<vector<int>>&ans , int index , vector<int> &ds )
    {
        if(target == 0)
        {
            ans.push_back(ds);
            return;
        }
        
        
        for(int i = index ; i<n ; i++)
        {
            if(i>index && arr[i] == arr[i-1]) continue;
            if(arr[i]>target) break;
            
            ds.push_back(arr[i]);
            solve(arr,n,target-arr[i],ans,i+1,ds);
            ds.pop_back();
        }
    }
public:
    vector<vector<int>> CombinationSum2(vector<int> arr,int n,int k)
    {
        //code here
        vector<vector<int>> ans;
        sort(arr.begin(),arr.end());
        vector<int>ds;
        solve(arr,n,k,ans ,0 ,ds);
        return ans;
    }
};