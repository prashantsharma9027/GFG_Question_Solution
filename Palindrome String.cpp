class Solution{
public:	
	
	
	int isPalindrome(string S)
	{
	    // Your code goes here
	    int st = 0;
	    int en = S.size()-1;
	   
	    for(int i = 0 ; i<en ; i++)
	    {
	        if(S[st]!=S[en])
	        {
	            return 0;
	        }
	        else
	        {
	            st++;
	            en--;
	        }
	    }
	    
	    return 1;
	}

};