long long int no_of_subarrays(int n, vector<int> &arr) {
    // Write your code here.
        long ans = 0;
		long curr = 0;
		for(int i = 0 ; i< arr.size() ; i++){
		    if(arr[i]==0){
		        curr+=1;
		    }else{
		        curr=0;
		    }
		    ans += curr;
		}
		return ans;
}