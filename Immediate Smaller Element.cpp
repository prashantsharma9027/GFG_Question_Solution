class Solution{
public:	
	void immediateSmaller(vector<int>&arr, int n) {
	    //  code here
	    
	    stack<int>s;
	    
	    for(int i=n-1;i>=0;i--){
	        int data = arr[i];
                if(s.size()>0 and s.top() <arr[i] ) arr[i] = s.top();
                
                else
                {
                    arr[i] = -1;
                }
                
                s.push(data);
            }
	}

};