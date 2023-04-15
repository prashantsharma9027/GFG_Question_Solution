// Time Complexity = O(2^N * N);
// Space Complexity = O(N)


class Solution
{
private:
    void solve(vector<int> &arr , int N , int index , vector<int> &ds , vector<int> &ans)
    {
        if(index == N)
        {
            int sum = 0;
            for(auto it:ds)
            {
                sum = sum + it;
            }
            ans.push_back(sum);
            return;
        }
        
        ds.push_back(arr[index]);
        solve(arr,N,index+1,ds,ans);
        ds.pop_back();
        solve(arr,N,index+1,ds,ans);
    }
public:
    vector<int> subsetSums(vector<int> arr, int N)
    {
        // Write Your Code here
        vector<int> ds;
        vector<int> ans;
    
        
        solve(arr,N,0,ds,ans);
        
        return ans;
        
    }
};


// Time Complexity = O(2^N * N);
// Space Complexity = O(N)
