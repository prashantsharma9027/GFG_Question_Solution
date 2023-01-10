https://practice.geeksforgeeks.org/problems/e0059183c88ab680b2f73f7d809fb8056fe9dc43/1

class Solution {
  public:
    long long countPairs(int n, int arr[], int k) {
        // code here
        int count = 0;
        unordered_map<int ,int> mp;
        
        for(int i = 0 ; i< n ; i ++ )
        {
            mp[arr[i]%k]++;
        }
        
        for(auto i : mp)
        {
            count = count + (i.second*(i.second-1))/2; ;
            
        }
    return count;
    }
};