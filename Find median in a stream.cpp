class Solution
{
    
    public:
    priority_queue<int, vector<int>, greater<int>> minHeap; 
    priority_queue<int> maxHeap;
    
    //Function to insert heap.
    void insertHeap(int &num)
    {
        if(minHeap.empty() || minHeap.top()<num) minHeap.push(num);
        else maxHeap.push(num);

        if(minHeap.size()>maxHeap.size()+1)
        {
            int val=minHeap.top();
            maxHeap.push(val);
            minHeap.pop();
        }
        else if(maxHeap.size()>minHeap.size()+1)
        {
            int val=maxHeap.top();
            minHeap.push(val);
            maxHeap.pop();
        }
    }
    
    //Function to balance heaps.
    void balanceHeaps()
    {
        
    }
    
    //Function to return Median.
    double getMedian()
    {
        if(minHeap.size()>maxHeap.size()){
            return minHeap.top();
        }
        if(maxHeap.size()>minHeap.size()){
            return maxHeap.top();
        }
        return (maxHeap.top()+minHeap.top())/2.0;
    }
};