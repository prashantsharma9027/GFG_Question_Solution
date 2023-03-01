class Solution{
    public:
    //Function to count the frequency of all elements from 1 to N in the array.
    void frequencyCount(vector<int>& arr,int N, int P)
    { 
        // code here
        int maxi = max(P,N);
    	vector<int> count(maxi+1,0);
        for(int i=0;i<N;i++){
            count[arr[i]]++;
        }
        for(int i=0;i<N;i++){
            arr[i] = count[i+1];
        }
    }
};