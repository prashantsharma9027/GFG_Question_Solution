class Solution{
    private:
    void heapify(vector<int> &ans , int index , int n)
    {
        int largest = index;
        int left = 2*index + 1;
        int right = 2*index + 2;
        
        if(left<n && ans[largest] < ans[left])
        {
            largest = left;
        }
        
        if(right<n && ans[largest] < ans[right])
        {
            largest = right;
        }
        if(largest != index)
        {
            swap(ans[index],ans[largest]);
            heapify(ans , largest , n);
        }
        
    }
    public:
    vector<int> mergeHeaps(vector<int> &a, vector<int> &b, int n, int m) {
        // your code here
        vector<int> ans;
        for(auto it: a)
        {
            ans.push_back(it);
        }
        for(auto it: b)
        {
            ans.push_back(it);
        }
        
        int size = ans.size();
        
        for(int i = (size/2) - 1 ; i>=0 ;i--)
        {
            heapify(ans,i,size);
        }
        
        return ans;
    }
};